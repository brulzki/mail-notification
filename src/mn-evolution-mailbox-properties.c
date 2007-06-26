/* Generated by GOB (v2.0.14)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 14

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-evolution-mailbox-properties.h"

#include "mn-evolution-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 31 "mn-evolution-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include <libbonoboui.h>
#include "mn-evolution.h"
#include "mn-evolution-mailbox.h"
#include "mn-evolution-glue-client.h"
#include "mn-stock.h"
#include "mn-mailbox-properties-private.h"

#line 37 "mn-evolution-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_EVOLUTION_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_EVOLUTION_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_EVOLUTION_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_EVOLUTION_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_EVOLUTION_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_EVOLUTION_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNEvolutionMailboxProperties Self;
typedef MNEvolutionMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void mn_evolution_mailbox_properties_class_init (MNEvolutionMailboxPropertiesClass * class) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_init (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void ___3_mn_evolution_mailbox_properties_dispose (GObject * object) G_GNUC_UNUSED;
static gboolean mn_evolution_mailbox_properties_install_listeners (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_update_contents (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_contact_error (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_set_widget (MNEvolutionMailboxProperties * self, GtkWidget * widget) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_selected_uri_changed_cb (BonoboListener * listener, const char * event_name, const CORBA_any * any, CORBA_Environment * env, gpointer user_data) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_folder_activated_cb (BonoboListener * listener, const char * event_name, const CORBA_any * any, CORBA_Environment * env, gpointer user_data) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_sync (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void ___b_mn_evolution_mailbox_properties_set_mailbox (MNMailboxProperties * properties, MNMailbox * mailbox) G_GNUC_UNUSED;
static MNMailbox * ___c_mn_evolution_mailbox_properties_get_mailbox (MNMailboxProperties * properties) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_COMPLETE,
	PROP_DEFAULT_NAME
};

/* pointer to the class of our parent */
static MNMailboxPropertiesClass *parent_class = NULL;

/* Short form macros */
#define self_install_listeners mn_evolution_mailbox_properties_install_listeners
#define self_update_contents mn_evolution_mailbox_properties_update_contents
#define self_contact_error mn_evolution_mailbox_properties_contact_error
#define self_set_widget mn_evolution_mailbox_properties_set_widget
#define self_selected_uri_changed_cb mn_evolution_mailbox_properties_selected_uri_changed_cb
#define self_folder_activated_cb mn_evolution_mailbox_properties_folder_activated_cb
#define self_sync mn_evolution_mailbox_properties_sync
GType
mn_evolution_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNEvolutionMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_evolution_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNEvolutionMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_evolution_mailbox_properties_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_MAILBOX_PROPERTIES, "MNEvolutionMailboxProperties", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNEvolutionMailboxProperties *)g_object_new(mn_evolution_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNEvolutionMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNEvolutionMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNEvolutionMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNEvolutionMailboxProperties *)g_object_new_valist (mn_evolution_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::dispose"
	MNEvolutionMailboxProperties *self G_GNUC_UNUSED = MN_EVOLUTION_MAILBOX_PROPERTIES (obj_self);
#line 90 "mn-evolution-mailbox-properties.gob"
	___3_mn_evolution_mailbox_properties_dispose(obj_self);
#line 133 "mn-evolution-mailbox-properties.c"
#line 52 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->control) { g_object_unref ((gpointer) self->_priv->control); self->_priv->control = NULL; }
#line 136 "mn-evolution-mailbox-properties.c"
#define pbag (self->_priv->pbag)
#define VAR pbag
	{
#line 55 "mn-evolution-mailbox-properties.gob"
	 bonobo_object_release_unref(VAR, NULL); }
#line 142 "mn-evolution-mailbox-properties.c"
	memset(&pbag, 0, sizeof(pbag));
#undef VAR
#undef pbag
}
#undef __GOB_FUNCTION__


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::finalize"
	MNEvolutionMailboxProperties *self G_GNUC_UNUSED = MN_EVOLUTION_MAILBOX_PROPERTIES (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
#line 48 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->uri) { g_free ((gpointer) self->_priv->uri); self->_priv->uri = NULL; }
#line 160 "mn-evolution-mailbox-properties.c"
#line 49 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->name) { g_free ((gpointer) self->_priv->name); self->_priv->name = NULL; }
#line 163 "mn-evolution-mailbox-properties.c"
}
#undef __GOB_FUNCTION__

#line 65 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_class_init (MNEvolutionMailboxPropertiesClass * class G_GNUC_UNUSED)
#line 170 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) class;
	MNMailboxPropertiesClass *mn_mailbox_properties_class = (MNMailboxPropertiesClass *)class;

	g_type_class_add_private(class,sizeof(MNEvolutionMailboxPropertiesPrivate));

	parent_class = g_type_class_ref (MN_TYPE_MAILBOX_PROPERTIES);

#line 90 "mn-evolution-mailbox-properties.gob"
	g_object_class->dispose = ___dispose;
#line 297 "mn-evolution-mailbox-properties.gob"
	mn_mailbox_properties_class->set_mailbox = ___b_mn_evolution_mailbox_properties_set_mailbox;
#line 313 "mn-evolution-mailbox-properties.gob"
	mn_mailbox_properties_class->get_mailbox = ___c_mn_evolution_mailbox_properties_get_mailbox;
#line 186 "mn-evolution-mailbox-properties.c"
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
#line 66 "mn-evolution-mailbox-properties.gob"

    MNMailboxPropertiesClass *p_class = MN_MAILBOX_PROPERTIES_CLASS(class);

    p_class->type = "evolution";
    p_class->stock_id = MN_STOCK_EVOLUTION_MAILBOX;
    p_class->combo_label = "Evolution";
  
#line 206 "mn-evolution-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__
#line 74 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_init (MNEvolutionMailboxProperties * self G_GNUC_UNUSED)
#line 213 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_EVOLUTION_MAILBOX_PROPERTIES,MNEvolutionMailboxPropertiesPrivate);
#line 31 "mn-evolution-mailbox-properties.gob"
	self->_priv->pbag = CORBA_OBJECT_NIL;
#line 219 "mn-evolution-mailbox-properties.c"
#line 55 "mn-evolution-mailbox-properties.gob"
	self->_priv->selected_uri_listener = CORBA_OBJECT_NIL;
#line 222 "mn-evolution-mailbox-properties.c"
#line 55 "mn-evolution-mailbox-properties.gob"
	self->_priv->activated_listener = CORBA_OBJECT_NIL;
#line 225 "mn-evolution-mailbox-properties.c"
 {
#line 75 "mn-evolution-mailbox-properties.gob"

    MNMailboxProperties *properties = MN_MAILBOX_PROPERTIES(self);

    /* translators: header capitalization */
    selfp->folder_vbox = mn_mailbox_properties_add_general_section(properties, _("Folder"));

    selfp->glue = mn_evolution_glue_client_use();
    g_signal_connect_swapped(selfp->glue, "notify::object", G_CALLBACK(self_update_contents), self);

    selfp->control = mn_bonobo_unknown_new(MN_EVOLUTION_FOLDER_TREE_CONTROL_IID);
    g_signal_connect_swapped(selfp->control, "notify::object", G_CALLBACK(self_update_contents), self);

    self_update_contents(self);
  
#line 242 "mn-evolution-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::get_property"
{
	MNEvolutionMailboxProperties *self G_GNUC_UNUSED;

	self = MN_EVOLUTION_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_COMPLETE:
		{
#line 60 "mn-evolution-mailbox-properties.gob"
 g_value_set_boolean(VAL, selfp->tree != NULL && selfp->uri != NULL); 
#line 263 "mn-evolution-mailbox-properties.c"
		}
		break;
	case PROP_DEFAULT_NAME:
		{
#line 63 "mn-evolution-mailbox-properties.gob"
 g_value_set_string(VAL, selfp->name); 
#line 270 "mn-evolution-mailbox-properties.c"
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



#line 90 "mn-evolution-mailbox-properties.gob"
static void 
___3_mn_evolution_mailbox_properties_dispose (GObject * object G_GNUC_UNUSED)
#line 290 "mn-evolution-mailbox-properties.c"
#define PARENT_HANDLER(___object) \
	{ if(G_OBJECT_CLASS(parent_class)->dispose) \
		(* G_OBJECT_CLASS(parent_class)->dispose)(___object); }
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::dispose"
{
#line 92 "mn-evolution-mailbox-properties.gob"
	
    Self *self = SELF(object);

    /*
     * We are no longer operational after dispose (see unrefwith
     * above), so we must remove our listeners.
     */
    if (selfp->selected_uri_listener != CORBA_OBJECT_NIL)
      {
	g_assert(selfp->pbag != CORBA_OBJECT_NIL);

	bonobo_event_source_client_remove_listener(selfp->pbag, selfp->selected_uri_listener, NULL);
	selfp->selected_uri_listener = bonobo_object_release_unref(selfp->selected_uri_listener, NULL);
      }
    if (selfp->activated_listener != CORBA_OBJECT_NIL)
      {
	Bonobo_Control control;

	control = mn_bonobo_unknown_get_object(selfp->control);
	g_assert(control != CORBA_OBJECT_NIL);

	bonobo_event_source_client_remove_listener(control, selfp->activated_listener, NULL);
	selfp->activated_listener = bonobo_object_release_unref(selfp->activated_listener, NULL);

	bonobo_object_release_unref(control, NULL);
      }

    if (selfp->glue)
      {
	g_signal_handlers_disconnect_by_func(selfp->glue, self_update_contents, self);
	mn_evolution_glue_client_unuse();
	selfp->glue = NULL;
      }

    PARENT_HANDLER(object);
  }}
#line 334 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 129 "mn-evolution-mailbox-properties.gob"
static gboolean 
mn_evolution_mailbox_properties_install_listeners (MNEvolutionMailboxProperties * self)
#line 341 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::install_listeners"
#line 129 "mn-evolution-mailbox-properties.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 129 "mn-evolution-mailbox-properties.gob"
	g_return_val_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self), (gboolean )0);
#line 348 "mn-evolution-mailbox-properties.c"
{
#line 131 "mn-evolution-mailbox-properties.gob"
	
    Bonobo_Control control;

    selfp->selected_uri_listener = bonobo_event_source_client_add_listener_full(selfp->pbag,
										g_cclosure_new(G_CALLBACK(self_selected_uri_changed_cb), self, NULL),
										"Bonobo/Property:change:selected-uri",
										NULL);
    if (selfp->selected_uri_listener == CORBA_OBJECT_NIL)
      return FALSE;

    control = mn_bonobo_unknown_get_object(selfp->control);
    g_assert(control != CORBA_OBJECT_NIL);

    selfp->activated_listener = bonobo_event_source_client_add_listener_full(control,
									     g_cclosure_new(G_CALLBACK(self_folder_activated_cb), self, NULL),
									     MN_EVOLUTION_FOLDER_TREE_CONTROL_EVENT_PREFIX ":" MN_EVOLUTION_FOLDER_TREE_CONTROL_EVENT_ACTIVATED,
									     NULL);
    bonobo_object_release_unref(control, NULL);

    return selfp->activated_listener != CORBA_OBJECT_NIL;
  }}
#line 372 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 153 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_update_contents (MNEvolutionMailboxProperties * self)
#line 378 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::update_contents"
#line 153 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 153 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 385 "mn-evolution-mailbox-properties.c"
{
#line 155 "mn-evolution-mailbox-properties.gob"
	
    GNOME_MailNotification_Evolution_Glue glue;
    Bonobo_Control control;
    GtkWidget *tree = NULL;

    glue = mn_bonobo_unknown_get_object(selfp->glue);
    control = mn_bonobo_unknown_get_object(selfp->control);

    if (glue != CORBA_OBJECT_NIL && control != CORBA_OBJECT_NIL)
      {
	BonoboControlFrame *frame;

	tree = bonobo_widget_new_control_from_objref(control, CORBA_OBJECT_NIL);

	frame = bonobo_widget_get_control_frame(BONOBO_WIDGET(tree));

	selfp->pbag = bonobo_control_frame_get_control_property_bag(frame, NULL);
	if (selfp->pbag != CORBA_OBJECT_NIL && self_install_listeners(self))
	  {
	    /* give the folder tree a decent height */
	    gtk_widget_set_size_request(tree, -1, 150);

	    self_set_widget(self, selfp->tree = tree);
	    self_sync(self);

	    goto end;	/* success */
	  }
      }

    /* failure */

    if (tree)
      gtk_widget_destroy(tree);
    self_contact_error(self);

  end:
    bonobo_object_release_unref(glue, NULL);
    bonobo_object_release_unref(control, NULL);
  }}
#line 427 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 195 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_contact_error (MNEvolutionMailboxProperties * self)
#line 433 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::contact_error"
#line 195 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 195 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 440 "mn-evolution-mailbox-properties.c"
{
#line 197 "mn-evolution-mailbox-properties.gob"
	
    GtkWidget *label;

    selfp->pbag = bonobo_object_release_unref(selfp->pbag, NULL);
    selfp->selected_uri_listener = bonobo_object_release_unref(selfp->selected_uri_listener, NULL);
    selfp->activated_listener = bonobo_object_release_unref(selfp->activated_listener, NULL);

    label = gtk_label_new(_("Mail Notification can not contact Evolution. Make sure that Evolution is running and that the Evolution Jean-Yves Lefort's Mail Notification plugin is loaded."));

    gtk_misc_set_alignment(GTK_MISC(label), 0.0, 0.5);
    gtk_label_set_line_wrap(GTK_LABEL(label), TRUE);
    gtk_label_set_selectable(GTK_LABEL(label), TRUE);

    self_set_widget(self, label);
    selfp->tree = NULL;

    g_object_notify(G_OBJECT(self), "complete");
  }}
#line 461 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 216 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_set_widget (MNEvolutionMailboxProperties * self, GtkWidget * widget)
#line 467 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::set_widget"
#line 216 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 216 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 216 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (widget != NULL);
#line 216 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 478 "mn-evolution-mailbox-properties.c"
{
#line 218 "mn-evolution-mailbox-properties.gob"
	
    if (selfp->child)
      gtk_widget_destroy(selfp->child);

    gtk_widget_show(widget);
    gtk_box_pack_start(GTK_BOX(selfp->folder_vbox), widget, TRUE, TRUE, 0);

    selfp->child = widget;
  }}
#line 490 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 228 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_selected_uri_changed_cb (BonoboListener * listener, const char * event_name, const CORBA_any * any, CORBA_Environment * env, gpointer user_data)
#line 496 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::selected_uri_changed_cb"
{
#line 234 "mn-evolution-mailbox-properties.gob"
	
    Self *self = user_data;
    const char *uri;
    CORBA_string name = NULL;

    uri = BONOBO_ARG_GET_STRING(any);

    if (uri && *uri)
      {
	GNOME_MailNotification_Evolution_Glue glue;
	CORBA_Environment name_env;

	glue = mn_bonobo_unknown_get_object(selfp->glue);
	if (glue != CORBA_OBJECT_NIL)
	  {
	    CORBA_exception_init(&name_env);

	    name = GNOME_MailNotification_Evolution_Glue_getFolderName(glue, uri, &name_env);
	    if (BONOBO_EX(&name_env))
	      name = NULL;

	    CORBA_exception_free(&name_env);

	    bonobo_object_release_unref(glue, NULL);
	  }

	if (! name)
	  uri = NULL;
      }

    g_free(selfp->uri);
    selfp->uri = g_strdup(uri);

    g_free(selfp->name);
    selfp->name = g_strdup(name);

    CORBA_free(name);

    g_object_notify(G_OBJECT(self), "complete");
    g_object_notify(G_OBJECT(self), "default-name");
  }}
#line 542 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 276 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_folder_activated_cb (BonoboListener * listener, const char * event_name, const CORBA_any * any, CORBA_Environment * env, gpointer user_data)
#line 548 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::folder_activated_cb"
{
#line 282 "mn-evolution-mailbox-properties.gob"
	
    Self *self = user_data;

    gtk_window_activate_default(GTK_WINDOW(MN_MAILBOX_PROPERTIES(self)->dialog));
  }}
#line 558 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 288 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_sync (MNEvolutionMailboxProperties * self)
#line 564 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::sync"
#line 288 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 288 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 571 "mn-evolution-mailbox-properties.c"
{
#line 290 "mn-evolution-mailbox-properties.gob"
	
    g_return_if_fail(selfp->tree != NULL);

    if (selfp->uri)
      bonobo_widget_set_property(BONOBO_WIDGET(selfp->tree), "selected-uri", BONOBO_ARG_STRING, selfp->uri, NULL);
  }}
#line 580 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 297 "mn-evolution-mailbox-properties.gob"
static void 
___b_mn_evolution_mailbox_properties_set_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED, MNMailbox * mailbox)
#line 586 "mn-evolution-mailbox-properties.c"
#define PARENT_HANDLER(___properties,___mailbox) \
	{ if(MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox) \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox)(___properties,___mailbox); }
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::set_mailbox"
{
#line 299 "mn-evolution-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNEvolutionMailbox *evolution_mailbox = MN_EVOLUTION_MAILBOX(mailbox);

    g_free(selfp->uri);
    selfp->uri = g_strdup(evolution_mailbox->uri);

    g_free(selfp->name);
    selfp->name = g_strdup(evolution_mailbox->folder_name);

    if (selfp->tree)
      self_sync(self);
  }}
#line 607 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 313 "mn-evolution-mailbox-properties.gob"
static MNMailbox * 
___c_mn_evolution_mailbox_properties_get_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED)
#line 614 "mn-evolution-mailbox-properties.c"
#define PARENT_HANDLER(___properties) \
	((MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)? \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)(___properties): \
		((MNMailbox * )0))
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::get_mailbox"
{
#line 315 "mn-evolution-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNMailbox *mailbox;

    mailbox = PARENT_HANDLER(properties);

    g_object_set(mailbox,
		 MN_EVOLUTION_MAILBOX_PROP_URI(selfp->uri),
		 MN_EVOLUTION_MAILBOX_PROP_FOLDER_NAME(selfp->name),
		 NULL);

    return mailbox;
  }}
#line 636 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER
