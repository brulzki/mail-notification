/* Generated by GOB (v2.0.14)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 14

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-imap-mailbox-properties.h"

#include "mn-imap-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 30 "mn-imap-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include "mn-mailbox-properties.h"
#include "mn-mailbox-properties-private.h"
#include "mn-authenticated-mailbox-properties-private.h"
#include "mn-pi-mailbox-properties-private.h"
#include "mn-auth-combo-box.h"
#include "mn-util.h"
#include "mn-properties-dialog.h"

#line 38 "mn-imap-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_IMAP_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_IMAP_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_IMAP_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_IMAP_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_IMAP_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_IMAP_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNIMAPMailboxProperties Self;
typedef MNIMAPMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void mn_imap_mailbox_properties_class_init (MNIMAPMailboxPropertiesClass * class) G_GNUC_UNUSED;
static void mn_imap_mailbox_properties_init (MNIMAPMailboxProperties * self) G_GNUC_UNUSED;
static void mn_imap_mailbox_properties_add_idle_usage (MNIMAPMailboxProperties * self, GtkBox * idle_vbox, MNIMAPMailboxUseIDLE usage, const char * mnemonic) G_GNUC_UNUSED;
static void mn_imap_mailbox_properties_radio_toggled_h (GtkToggleButton * togglebutton, gpointer user_data) G_GNUC_UNUSED;
static void ___5_mn_imap_mailbox_properties_set_mailbox (MNMailboxProperties * properties, MNMailbox * mailbox) G_GNUC_UNUSED;
static MNMailbox * ___6_mn_imap_mailbox_properties_get_mailbox (MNMailboxProperties * properties) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_COMPLETE,
	PROP_DEFAULT_NAME
};

/* pointer to the class of our parent */
static MNPIMailboxPropertiesClass *parent_class = NULL;

/* Short form macros */
#define self_add_idle_usage mn_imap_mailbox_properties_add_idle_usage
#define self_radio_toggled_h mn_imap_mailbox_properties_radio_toggled_h
GType
mn_imap_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNIMAPMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_imap_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNIMAPMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_imap_mailbox_properties_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_PI_MAILBOX_PROPERTIES, "MNIMAPMailboxProperties", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNIMAPMailboxProperties *)g_object_new(mn_imap_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNIMAPMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNIMAPMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNIMAPMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNIMAPMailboxProperties *)g_object_new_valist (mn_imap_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::finalize"
	MNIMAPMailboxProperties *self G_GNUC_UNUSED = MN_IMAP_MAILBOX_PROPERTIES (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
}
#undef __GOB_FUNCTION__

#line 93 "mn-imap-mailbox-properties.gob"
static void 
mn_imap_mailbox_properties_class_init (MNIMAPMailboxPropertiesClass * class G_GNUC_UNUSED)
#line 130 "mn-imap-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) class;
	MNMailboxPropertiesClass *mn_mailbox_properties_class = (MNMailboxPropertiesClass *)class;

	g_type_class_add_private(class,sizeof(MNIMAPMailboxPropertiesPrivate));

	parent_class = g_type_class_ref (MN_TYPE_PI_MAILBOX_PROPERTIES);

#line 184 "mn-imap-mailbox-properties.gob"
	mn_mailbox_properties_class->set_mailbox = ___5_mn_imap_mailbox_properties_set_mailbox;
#line 203 "mn-imap-mailbox-properties.gob"
	mn_mailbox_properties_class->get_mailbox = ___6_mn_imap_mailbox_properties_get_mailbox;
#line 144 "mn-imap-mailbox-properties.c"
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
    {
	g_object_class_override_property (g_object_class,
		PROP_COMPLETE,
		"complete");
	g_object_class_override_property (g_object_class,
		PROP_DEFAULT_NAME,
		"default_name");
    }
 {
#line 94 "mn-imap-mailbox-properties.gob"

    MNMailboxPropertiesClass *p_class = MN_MAILBOX_PROPERTIES_CLASS(class);

    p_class->type = "imap";
    p_class->combo_label = "IMAP";
  
#line 163 "mn-imap-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__
#line 101 "mn-imap-mailbox-properties.gob"
static void 
mn_imap_mailbox_properties_init (MNIMAPMailboxProperties * self G_GNUC_UNUSED)
#line 170 "mn-imap-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_IMAP_MAILBOX_PROPERTIES,MNIMAPMailboxPropertiesPrivate);
 {
#line 102 "mn-imap-mailbox-properties.gob"

    MNMailboxProperties *properties = MN_MAILBOX_PROPERTIES(self);
    MNPIMailboxProperties *pi = MN_PI_MAILBOX_PROPERTIES(self);
    GtkWidget *hbox;
    GtkWidget *folder_vbox;
    GtkWidget *idle_section;
    GtkWidget *idle_vbox;
    int i;

    /* translators: header capitalization */
    folder_vbox = mn_mailbox_properties_add_general_section(properties, _("IMAP Mailbox"));

    selfp->inbox_radio = gtk_radio_button_new_with_mnemonic(NULL, _("In_box"));
    gtk_size_group_add_widget(properties->label_size_group, selfp->inbox_radio);

    gtk_box_pack_start(GTK_BOX(folder_vbox), selfp->inbox_radio, FALSE, FALSE, 0);

    selfp->other_radio = gtk_radio_button_new_with_mnemonic_from_widget(GTK_RADIO_BUTTON(selfp->inbox_radio), _("_Other:"));
    gtk_size_group_add_widget(properties->label_size_group, selfp->other_radio);

    selfp->mailbox_entry = gtk_entry_new();
    gtk_widget_set_sensitive(selfp->mailbox_entry, FALSE);

    hbox = gtk_hbox_new(FALSE, 12);
    gtk_box_pack_start(GTK_BOX(hbox), selfp->other_radio, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), selfp->mailbox_entry, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(folder_vbox), hbox, FALSE, FALSE, 0);
    gtk_widget_show_all(folder_vbox);

    /* translators: header capitalization */
    idle_section = mn_hig_section_new_with_box(_("Use the IDLE Extension"), NULL, &idle_vbox);
    gtk_box_pack_start(GTK_BOX(pi->connection_page), idle_section, FALSE, FALSE, 0);
    gtk_widget_show(idle_section);

    self_add_idle_usage(self, GTK_BOX(idle_vbox), MN_IMAP_MAILBOX_USE_IDLE_NEVER, Q_("IMAP connection tab|_Never"));
    self_add_idle_usage(self, GTK_BOX(idle_vbox), MN_IMAP_MAILBOX_USE_IDLE_AUTODETECT, _("A_utodetect"));
    self_add_idle_usage(self, GTK_BOX(idle_vbox), MN_IMAP_MAILBOX_USE_IDLE_ALWAYS, _("Al_ways"));

    /* by default, autodetect is enabled */
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(selfp->use_idle_radio[MN_IMAP_MAILBOX_USE_IDLE_AUTODETECT]), TRUE);

    mn_auth_combo_box_append(MN_AUTH_COMBO_BOX(pi->auth_combo), "+LOGIN", "IMAP LOGIN");

    for (i = 0; i < MN_PI_MAILBOX_N_CONNECTION_TYPES; i++)
      gtk_spin_button_set_value(GTK_SPIN_BUTTON(pi->port_spin[i]), mn_imap_mailbox_default_ports[i]);

    properties->entries = g_slist_append(properties->entries, selfp->mailbox_entry);

    g_signal_connect(selfp->inbox_radio, "toggled", G_CALLBACK(self_radio_toggled_h), self);
    g_signal_connect(selfp->other_radio, "toggled", G_CALLBACK(self_radio_toggled_h), self);

    g_object_connect(selfp->mailbox_entry,
		     "swapped-signal::changed", mn_mailbox_properties_notify_complete, self,
		     "swapped-signal::changed", mn_mailbox_properties_notify_default_name, self,
		     NULL);
  
#line 232 "mn-imap-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::get_property"
{
	MNIMAPMailboxProperties *self G_GNUC_UNUSED;

	self = MN_IMAP_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_COMPLETE:
		{
#line 51 "mn-imap-mailbox-properties.gob"

      gboolean complete;

      complete = mn_pi_mailbox_properties_is_complete(MN_PI_MAILBOX_PROPERTIES(self));
      if (complete)
	{
	  gboolean other_active;
	  const char *mailbox;

	  other_active = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(selfp->other_radio));
	  mailbox = gtk_entry_get_text(GTK_ENTRY(selfp->mailbox_entry));

	  if (other_active && ! *mailbox)
	    complete = FALSE;
	}

      g_value_set_boolean(VAL, complete);
    
#line 270 "mn-imap-mailbox-properties.c"
		}
		break;
	case PROP_DEFAULT_NAME:
		{
#line 72 "mn-imap-mailbox-properties.gob"

      const char *username;
      const char *server;
      gboolean other_active;
      const char *mailbox;

      mn_authenticated_mailbox_properties_get_contents(MN_AUTHENTICATED_MAILBOX_PROPERTIES(self),
						       &username,
						       NULL);
      mn_pi_mailbox_properties_get_contents(MN_PI_MAILBOX_PROPERTIES(self),
					    NULL,
					    NULL,
					    &server,
					    NULL);

      other_active = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(selfp->other_radio));
      mailbox = gtk_entry_get_text(GTK_ENTRY(selfp->mailbox_entry));

      g_value_take_string(VAL, mn_imap_mailbox_build_name(username, server, other_active ? mailbox : NULL));
    
#line 296 "mn-imap-mailbox-properties.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__



#line 159 "mn-imap-mailbox-properties.gob"
static void 
mn_imap_mailbox_properties_add_idle_usage (MNIMAPMailboxProperties * self, GtkBox * idle_vbox, MNIMAPMailboxUseIDLE usage, const char * mnemonic)
#line 316 "mn-imap-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::add_idle_usage"
#line 159 "mn-imap-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 159 "mn-imap-mailbox-properties.gob"
	g_return_if_fail (MN_IS_IMAP_MAILBOX_PROPERTIES (self));
#line 159 "mn-imap-mailbox-properties.gob"
	g_return_if_fail (idle_vbox != NULL);
#line 159 "mn-imap-mailbox-properties.gob"
	g_return_if_fail (mnemonic != NULL);
#line 327 "mn-imap-mailbox-properties.c"
{
#line 164 "mn-imap-mailbox-properties.gob"
	
    selfp->use_idle_radio[usage] = usage == 0
      ? gtk_radio_button_new_with_mnemonic(NULL, mnemonic)
      : gtk_radio_button_new_with_mnemonic_from_widget(GTK_RADIO_BUTTON(selfp->use_idle_radio[0]), mnemonic);

    gtk_box_pack_start(idle_vbox, selfp->use_idle_radio[usage], TRUE, TRUE, 0);
    gtk_widget_show(selfp->use_idle_radio[usage]);
  }}
#line 338 "mn-imap-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 173 "mn-imap-mailbox-properties.gob"
static void 
mn_imap_mailbox_properties_radio_toggled_h (GtkToggleButton * togglebutton, gpointer user_data)
#line 344 "mn-imap-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::radio_toggled_h"
{
#line 175 "mn-imap-mailbox-properties.gob"
	
    Self *self = user_data;

    gtk_widget_set_sensitive(selfp->mailbox_entry, gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(selfp->other_radio)));

    g_object_notify(G_OBJECT(self), "complete");
    g_object_notify(G_OBJECT(self), "default-name");
  }}
#line 357 "mn-imap-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 184 "mn-imap-mailbox-properties.gob"
static void 
___5_mn_imap_mailbox_properties_set_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED, MNMailbox * mailbox)
#line 363 "mn-imap-mailbox-properties.c"
#define PARENT_HANDLER(___properties,___mailbox) \
	{ if(MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox) \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox)(___properties,___mailbox); }
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::set_mailbox"
{
#line 186 "mn-imap-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNIMAPMailbox *imap_mailbox = MN_IMAP_MAILBOX(mailbox);

    PARENT_HANDLER(properties, mailbox);

    if (! mn_utf8_strcasecmp(imap_mailbox->mailbox, "INBOX"))
      gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(selfp->inbox_radio), TRUE);
    else
      {
	gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(selfp->other_radio), TRUE);
	gtk_entry_set_text(GTK_ENTRY(selfp->mailbox_entry), imap_mailbox->mailbox);
      }

    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(selfp->use_idle_radio[imap_mailbox->use_idle_extension]), TRUE);
  }}
#line 387 "mn-imap-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 203 "mn-imap-mailbox-properties.gob"
static MNMailbox * 
___6_mn_imap_mailbox_properties_get_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED)
#line 394 "mn-imap-mailbox-properties.c"
#define PARENT_HANDLER(___properties) \
	((MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)? \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)(___properties): \
		((MNMailbox * )0))
{
#define __GOB_FUNCTION__ "MN:IMAP:Mailbox:Properties::get_mailbox"
{
#line 205 "mn-imap-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNIMAPMailboxUseIDLE use_idle;
    MNMailbox *mailbox;

    mailbox = PARENT_HANDLER(properties);

    for (use_idle = 0; use_idle < MN_IMAP_MAILBOX_N_USE_IDLE; use_idle++)
      if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(selfp->use_idle_radio[use_idle])))
	break;

    g_object_set(mailbox, MN_IMAP_MAILBOX_PROP_USE_IDLE_EXTENSION(use_idle), NULL);

    if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(selfp->other_radio)))
      g_object_set(mailbox, MN_IMAP_MAILBOX_PROP_MAILBOX((char *) gtk_entry_get_text(GTK_ENTRY(selfp->mailbox_entry))), NULL);

    return mailbox;
  }}
#line 421 "mn-imap-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER
