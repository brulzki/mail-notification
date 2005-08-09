/* 
 * Copyright (C) 2003-2005 Jean-Yves Lefort <jylefort@brutele.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include "config.h"
#include <stdlib.h>
#include <signal.h>
#include <gnome.h>
#include <libgnomevfs/gnome-vfs.h>
#ifdef WITH_MIME
#include <gmime/gmime.h>
#include "mn-gmime-stream-vfs.h"
#endif
#if defined(WITH_MBOX) || defined(WITH_MH) || defined(WITH_MAILDIR) || defined(WITH_SYLPHEED)
#include "mn-vfs-mailbox.h"
#endif
#ifdef WITH_EVOLUTION
#include "mn-corba-object.h"
#endif
#include "mn-conf.h"
#include "mn-util.h"
#include "mn-stock.h"
#include "mn-automation.h"
#include "mn-shell.h"
#include "mn-message.h"

/*** cpp *********************************************************************/

#define AUTOMATION_IID			"OAFIID:GNOME_MailNotification_Automation"
#define AUTOMATION_FACTORY_IID		"OAFIID:GNOME_MailNotification_Automation_Factory"

/*** variables ***************************************************************/

static gboolean arg_enable_info = FALSE;

/*** functions ***************************************************************/

static BonoboObject *mn_main_automation_factory_cb (BonoboGenericFactory *factory,
						    const char *iid,
						    gpointer closure);
static void	mn_main_list_features	(void);
static void	mn_main_info_log_cb	(const char	*log_domain,
					 GLogLevelFlags	log_level,
					 const char	*message,
					 gpointer	user_data);

static void	mn_main_init_classes	(void);

/*** implementation **********************************************************/

static BonoboObject *
mn_main_automation_factory_cb (BonoboGenericFactory *factory,
			       const char *iid,
			       gpointer closure)
{
  if (! strcmp(iid, AUTOMATION_IID))
    return BONOBO_OBJECT(mn_automation_new());

  g_return_val_if_reached(NULL);
}

static void
mn_main_list_features (void)
{
  gboolean first;

#define PRINT_COMPONENT(feature)	\
  {					\
    if (first)				\
      first = FALSE;			\
    else				\
      g_print(", ");			\
					\
    g_print("%s", (feature));		\
  }

  /*
   * Here and everywhere else, we order the backends by descending
   * order of (believed) popularity.
   */

  first = TRUE; g_print(_("Compiled-in mailbox backends: "));
#ifdef WITH_MBOX
  PRINT_COMPONENT("mbox");
#endif
#ifdef WITH_MH
  PRINT_COMPONENT("MH");
#endif
#ifdef WITH_MAILDIR
  PRINT_COMPONENT("Maildir");
#endif
#ifdef WITH_POP3
  PRINT_COMPONENT("POP3");
#endif
#ifdef WITH_IMAP
  PRINT_COMPONENT("IMAP");
#endif
#ifdef WITH_GMAIL
  PRINT_COMPONENT("Gmail");
#endif
#ifdef WITH_EVOLUTION
  PRINT_COMPONENT("Evolution");
#endif
#ifdef WITH_SYLPHEED
  PRINT_COMPONENT("Sylpheed");
#endif
  g_print("\n");
  
#if defined(WITH_POP3) || defined(WITH_IMAP)
  first = TRUE; g_print(_("Compiled-in POP3 and IMAP features: "));
#ifdef WITH_SSL
  PRINT_COMPONENT("SSL/TLS");
#endif
#ifdef WITH_SASL
  PRINT_COMPONENT("SASL");
#endif
#ifdef WITH_IPV6
  PRINT_COMPONENT("IPv6");
#endif
  g_print("\n");
#endif /* WITH_POP3 || WITH_IMAP */

#undef PRINT_COMPONENT
}

static void
mn_main_info_log_cb (const char *log_domain,
		     GLogLevelFlags log_level,
		     const char *message,
		     gpointer user_data)
{
  if (arg_enable_info)
    g_log_default_handler(log_domain, log_level, message, user_data);
}

static void
mn_main_init_classes (void)
{
  int i;

  g_type_class_ref(MN_TYPE_AUTOMATION);
#ifdef WITH_MIME
  g_type_class_ref(MN_TYPE_GMIME_STREAM_VFS);
  g_type_class_ref(GMIME_TYPE_PARSER);
  g_type_class_ref(GMIME_TYPE_STREAM_MEM);
  g_type_class_ref(GMIME_TYPE_MESSAGE);
#endif /* WITH_MIME */
  for (i = 0; mn_mailbox_types[i]; i++)
    g_type_class_ref(mn_mailbox_types[i]);
#if defined(WITH_MBOX) || defined(WITH_MH) || defined(WITH_MAILDIR) || defined(WITH_SYLPHEED)
  for (i = 0; mn_vfs_mailbox_backend_types[i]; i++)
    g_type_class_ref(mn_vfs_mailbox_backend_types[i]);
#endif
#ifdef WITH_EVOLUTION
  g_type_class_ref(MN_TYPE_CORBA_OBJECT);
#endif
  g_type_class_ref(MN_TYPE_MAILBOXES);
  g_type_class_ref(MN_TYPE_MESSAGE);
  g_type_class_ref(MN_TYPE_SHELL);
}

int
main (int argc, char **argv)
{
  gboolean arg_list_features = FALSE;
  gboolean arg_display_main_window = FALSE;
  gboolean arg_display_properties = FALSE;
  gboolean arg_display_about = FALSE;
  gboolean arg_close_popup = FALSE;
  gboolean arg_update = FALSE;
  gboolean arg_unset_obsolete_configuration = FALSE;
  gboolean arg_quit = FALSE;
  const struct poptOption popt_options[] = {
    {
      "enable-info",
      'i',
      POPT_ARG_NONE,
      &arg_enable_info,
      0,
      N_("Enable informational output"),
      NULL
    },
    {
      "list-features",
      'l',
      POPT_ARG_NONE,
      &arg_list_features,
      0,
      N_("List the compiled-in features"),
      NULL
    },
    {
      "display-main-window",
      'm',
      POPT_ARG_NONE,
      &arg_display_main_window,
      0,
      N_("Display the main window"),
      NULL
    },
    {
      "display-properties",
      'p',
      POPT_ARG_NONE,
      &arg_display_properties,
      0,
      N_("Display the properties dialog"),
      NULL
    },
    {
      "display-about",
      'a',
      POPT_ARG_NONE,
      &arg_display_about,
      0,
      N_("Display the about dialog"),
      NULL
    },
    {
      "close-popup",
      'c',
      POPT_ARG_NONE,
      &arg_close_popup,
      0,
      N_("Close the mail summary popup"),
      NULL
    },
    {
      "update",
      'u',
      POPT_ARG_NONE,
      &arg_update,
      0,
      N_("Update the mail status"),
      NULL
    },
    {
      "unset-obsolete-configuration",
      '\0',
      POPT_ARG_NONE,
      &arg_unset_obsolete_configuration,
      0,
      N_("Unset obsolete GConf configuration"),
      NULL
    },
    {
      "quit",
      'q',
      POPT_ARG_NONE,
      &arg_quit,
      0,
      N_("Quit Mail Notification"),
      NULL
    },
    POPT_TABLEEND
  };
  GdkPixbuf *icon;
  BonoboGenericFactory *automation_factory;
  GClosure *automation_factory_closure;
  Bonobo_RegistrationResult result;
      
  g_log_set_fatal_mask(G_LOG_DOMAIN, G_LOG_LEVEL_CRITICAL);
  g_log_set_handler(G_LOG_DOMAIN, G_LOG_LEVEL_INFO, mn_main_info_log_cb, NULL);

#ifdef ENABLE_NLS
  bindtextdomain(GETTEXT_PACKAGE, GNOMELOCALEDIR);
  bind_textdomain_codeset(GETTEXT_PACKAGE, "UTF-8");
  textdomain(GETTEXT_PACKAGE);
#endif

  g_set_application_name(_("Mail Notification"));

  g_thread_init(NULL);
  if (! g_thread_supported())
    /*
     * We can't use mn_error_dialog() because gtk_init() has not been
     * called yet.
     */
    g_critical(_("multi-threading is not available"));
  gdk_threads_init();

  gnome_program_init(PACKAGE,
		     VERSION,
		     LIBGNOMEUI_MODULE,
		     argc,
		     argv,
		     GNOME_PARAM_HUMAN_READABLE_NAME, _("Mail Notification"),
		     GNOME_PROGRAM_STANDARD_PROPERTIES,
		     GNOME_PARAM_POPT_TABLE, popt_options,
		     NULL);

  mn_mailbox_init_types();
#if defined(WITH_MBOX) || defined(WITH_MH) || defined(WITH_MAILDIR) || defined(WITH_SYLPHEED)
  mn_vfs_mailbox_init_types();
#endif

  if (arg_list_features)
    {
      mn_main_list_features();
      exit(0);
    }

  if (arg_unset_obsolete_configuration)
    {
      mn_conf_unset_obsolete();
      exit(0);
    }
  
  /* mn-client-session uses sockets, we don't want to die on SIGPIPE */
  signal(SIGPIPE, SIG_IGN);

  GDK_THREADS_ENTER();

  icon = mn_pixbuf_new(MN_IMAGE_FILE(GNOMEPIXMAPSDIR, "mail-notification.png"));
  if (icon)
    {
      gtk_window_set_default_icon(icon);
      g_object_unref(icon);
    }

  mn_stock_init();
  bonobo_activate();

  automation_factory = g_object_new(bonobo_generic_factory_get_type(), NULL);
  automation_factory_closure = g_cclosure_new(G_CALLBACK(mn_main_automation_factory_cb), NULL, NULL);
  bonobo_generic_factory_construct_noreg(automation_factory, AUTOMATION_FACTORY_IID, automation_factory_closure);

  result = bonobo_activation_register_active_server(AUTOMATION_FACTORY_IID, BONOBO_OBJREF(automation_factory), NULL);
  switch (result)
    {
    case Bonobo_ACTIVATION_REG_ALREADY_ACTIVE:
    case Bonobo_ACTIVATION_REG_SUCCESS:
      {
	CORBA_Environment env;
	GNOME_MailNotification_Automation automation;
	
	CORBA_exception_init(&env);

	automation = bonobo_activation_activate_from_id(AUTOMATION_IID, 0, NULL, &env);
	if (automation == CORBA_OBJECT_NIL)
	  mn_fatal_error_dialog(NULL, _("Bonobo could not locate the automation object. Please check your Mail Notification installation."));

	if (arg_quit)
	  {
	    if (result == Bonobo_ACTIVATION_REG_ALREADY_ACTIVE)
	      {
		g_message(_("quitting Mail Notification"));
		GNOME_MailNotification_Automation_quit(automation, &env);
	      }
	    else
	      g_message(_("Mail Notification is not running"));
	  }
	else
	  {
	    if (result != Bonobo_ACTIVATION_REG_ALREADY_ACTIVE)
	      {
		if (! gnome_vfs_init())
		  mn_fatal_error_dialog(NULL, _("Unable to initialize the GnomeVFS library."));

		gnome_authentication_manager_init();

#ifdef WITH_MIME
		g_mime_init(0);
#endif
	      
		mn_conf_init();
		/*
		 * Work around
		 * http://bugzilla.gnome.org/show_bug.cgi?id=64764:
		 * initialize our non GTK-based classes before any
		 * thread is created.
		 */
		mn_main_init_classes();
		mn_shell_new();
	      }
      
	    if (arg_display_main_window)
	      GNOME_MailNotification_Automation_displayMainWindow(automation, &env);
	    if (arg_display_properties)
	      GNOME_MailNotification_Automation_displayProperties(automation, &env);
	    if (arg_display_about)
	      GNOME_MailNotification_Automation_displayAbout(automation, &env);
	    if (arg_close_popup)
	      GNOME_MailNotification_Automation_closePopup(automation, &env);
	    
	    if (result == Bonobo_ACTIVATION_REG_ALREADY_ACTIVE)
	      {
		if (arg_update)
		  {
		    g_message(_("updating the mail status"));
		    GNOME_MailNotification_Automation_update(automation, &env);
		  }
		
		if (! (arg_display_main_window
		       || arg_display_properties
		       || arg_display_about
		       || arg_close_popup
		       || arg_update))
		  g_message(_("Mail Notification is already running"));
	      }
	  }
      
	bonobo_object_release_unref(automation, &env);
	CORBA_exception_free(&env);
      }
      break;

    case Bonobo_ACTIVATION_REG_NOT_LISTED:
      mn_fatal_error_dialog(NULL, _("Bonobo could not locate the %s file. Please check your Mail Notification installation."), "GNOME_MailNotification.server");
      break;

    case Bonobo_ACTIVATION_REG_ERROR:
      mn_fatal_error_dialog(NULL, _("Bonobo was unable to register the %s server. Please check your Mail Notification installation."), AUTOMATION_FACTORY_IID);
      break;

    default:
      g_return_val_if_reached(1);
    }

  gdk_notify_startup_complete();
  
  if (result != Bonobo_ACTIVATION_REG_ALREADY_ACTIVE && ! arg_quit)
    gtk_main();

  GDK_THREADS_LEAVE();

  return 0;
}
