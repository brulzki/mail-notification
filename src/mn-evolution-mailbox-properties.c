/* Generated by GOB (v2.0.12) on Tue Aug  9 22:01:56 2005
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 12

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

#line 30 "mn-evolution-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include <libbonoboui.h>
#include "mn-evolution.h"
#include "mn-evolution-mailbox.h"
#include "mn-stock.h"

#line 36 "mn-evolution-mailbox-properties.c"
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
static void mn_evolution_mailbox_properties_update_contents (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_contact_error (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_set_widget (MNEvolutionMailboxProperties * self, GtkWidget * widget) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_selected_uri_changed_cb (BonoboListener * listener, const char * event_name, const CORBA_any * any, CORBA_Environment * env, gpointer user_data) G_GNUC_UNUSED;
static void mn_evolution_mailbox_properties_sync (MNEvolutionMailboxProperties * self) G_GNUC_UNUSED;
static void ___9_mn_evolution_mailbox_properties_set_mailbox (MNMailboxProperties * properties, MNMailbox * mailbox) G_GNUC_UNUSED;
static MNMailbox * ___a_mn_evolution_mailbox_properties_get_mailbox (MNMailboxProperties * properties) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_COMPLETE,
	PROP_DEFAULT_NAME
};

/* pointer to the class of our parent */
static MNMailboxPropertiesClass *parent_class = NULL;

/* Short form macros */
#define self_update_contents mn_evolution_mailbox_properties_update_contents
#define self_contact_error mn_evolution_mailbox_properties_contact_error
#define self_set_widget mn_evolution_mailbox_properties_set_widget
#define self_selected_uri_changed_cb mn_evolution_mailbox_properties_selected_uri_changed_cb
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
#line 81 "mn-evolution-mailbox-properties.gob"
	___3_mn_evolution_mailbox_properties_dispose(obj_self);
#line 128 "mn-evolution-mailbox-properties.c"
#line 47 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->glue) { g_object_unref ((gpointer) self->_priv->glue); self->_priv->glue = NULL; }
#line 131 "mn-evolution-mailbox-properties.c"
#line 48 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->control) { g_object_unref ((gpointer) self->_priv->control); self->_priv->control = NULL; }
#line 134 "mn-evolution-mailbox-properties.c"
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
#line 44 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->uri) { g_free ((gpointer) self->_priv->uri); self->_priv->uri = NULL; }
#line 149 "mn-evolution-mailbox-properties.c"
#line 45 "mn-evolution-mailbox-properties.gob"
	if(self->_priv->name) { g_free ((gpointer) self->_priv->name); self->_priv->name = NULL; }
#line 152 "mn-evolution-mailbox-properties.c"
#define pbag (self->_priv->pbag)
#define VAR pbag
	{
#line 51 "mn-evolution-mailbox-properties.gob"
	 CORBA_Object_release(VAR, NULL); }
#line 158 "mn-evolution-mailbox-properties.c"
	memset(&pbag, 0, sizeof(pbag));
#undef VAR
#undef pbag
}
#undef __GOB_FUNCTION__

#line 60 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_class_init (MNEvolutionMailboxPropertiesClass * class G_GNUC_UNUSED)
#line 168 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) class;
	MNMailboxPropertiesClass *mn_mailbox_properties_class = (MNMailboxPropertiesClass *)class;

	g_type_class_add_private(class,sizeof(MNEvolutionMailboxPropertiesPrivate));

	parent_class = g_type_class_ref (MN_TYPE_MAILBOX_PROPERTIES);

#line 81 "mn-evolution-mailbox-properties.gob"
	g_object_class->dispose = ___dispose;
#line 249 "mn-evolution-mailbox-properties.gob"
	mn_mailbox_properties_class->set_mailbox = ___9_mn_evolution_mailbox_properties_set_mailbox;
#line 265 "mn-evolution-mailbox-properties.gob"
	mn_mailbox_properties_class->get_mailbox = ___a_mn_evolution_mailbox_properties_get_mailbox;
#line 184 "mn-evolution-mailbox-properties.c"
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
#line 61 "mn-evolution-mailbox-properties.gob"

    MNMailboxPropertiesClass *p_class = MN_MAILBOX_PROPERTIES_CLASS(class);

    p_class->type = "evolution";
    p_class->stock_id = MN_STOCK_EVOLUTION_MAILBOX;
    p_class->combo_label = "Evolution";
    p_class->section_label = _("Folder");
  
#line 205 "mn-evolution-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__
#line 70 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_init (MNEvolutionMailboxProperties * self G_GNUC_UNUSED)
#line 212 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::init"
	self->_priv = G_TYPE_INSTANCE_GET_PRIVATE(self,MN_TYPE_EVOLUTION_MAILBOX_PROPERTIES,MNEvolutionMailboxPropertiesPrivate);
#line 30 "mn-evolution-mailbox-properties.gob"
	self->_priv->pbag = CORBA_OBJECT_NIL;
#line 218 "mn-evolution-mailbox-properties.c"
#line 51 "mn-evolution-mailbox-properties.gob"
	self->_priv->listener = CORBA_OBJECT_NIL;
#line 221 "mn-evolution-mailbox-properties.c"
 {
#line 71 "mn-evolution-mailbox-properties.gob"

    selfp->glue = mn_corba_object_new(MN_EVOLUTION_GLUE_IID);
    g_signal_connect_swapped(selfp->glue, "notify::object", G_CALLBACK(self_update_contents), self);

    selfp->control = mn_corba_object_new(MN_EVOLUTION_FOLDER_TREE_CONTROL_IID);
    g_signal_connect_swapped(selfp->control, "notify::object", G_CALLBACK(self_update_contents), self);

    self_update_contents(self);
  
#line 233 "mn-evolution-mailbox-properties.c"
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
#line 55 "mn-evolution-mailbox-properties.gob"
 g_value_set_boolean(VAL, selfp->tree != NULL && selfp->uri != NULL); 
#line 254 "mn-evolution-mailbox-properties.c"
		}
		break;
	case PROP_DEFAULT_NAME:
		{
#line 58 "mn-evolution-mailbox-properties.gob"
 g_value_set_string(VAL, selfp->name); 
#line 261 "mn-evolution-mailbox-properties.c"
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



#line 81 "mn-evolution-mailbox-properties.gob"
static void 
___3_mn_evolution_mailbox_properties_dispose (GObject * object G_GNUC_UNUSED)
#line 281 "mn-evolution-mailbox-properties.c"
#define PARENT_HANDLER(___object) \
	{ if(G_OBJECT_CLASS(parent_class)->dispose) \
		(* G_OBJECT_CLASS(parent_class)->dispose)(___object); }
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::dispose"
{
#line 83 "mn-evolution-mailbox-properties.gob"
	
    Self *self = SELF(object);

    /*
     * We are no longer operational after dispose (see unrefwith
     * above), so we must remove our listener.
     */
    if (selfp->listener != CORBA_OBJECT_NIL)
      {
	g_assert(selfp->pbag != CORBA_OBJECT_NIL);

	bonobo_event_source_client_remove_listener(selfp->pbag, selfp->listener, NULL);

	CORBA_Object_release(selfp->listener, NULL);
	selfp->listener = CORBA_OBJECT_NIL;
      }

    PARENT_HANDLER(object);
  }}
#line 308 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 103 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_update_contents (MNEvolutionMailboxProperties * self)
#line 315 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::update_contents"
#line 103 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 103 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 322 "mn-evolution-mailbox-properties.c"
{
#line 105 "mn-evolution-mailbox-properties.gob"
	
    GNOME_MailNotification_Evolution_Glue glue;
    Bonobo_Control control;
    GtkWidget *tree = NULL;

    glue = mn_corba_object_get_object(selfp->glue);
    control = mn_corba_object_get_object(selfp->control);

    if (glue != CORBA_OBJECT_NIL && control != CORBA_OBJECT_NIL)
      {
	BonoboControlFrame *frame;

	tree = bonobo_widget_new_control_from_objref(control, CORBA_OBJECT_NIL);

	frame = bonobo_widget_get_control_frame(BONOBO_WIDGET(tree));

	selfp->pbag = bonobo_control_frame_get_control_property_bag(frame, NULL);
	if (selfp->pbag != CORBA_OBJECT_NIL)
	  {
	    selfp->listener = bonobo_event_source_client_add_listener_full(selfp->pbag,
									   g_cclosure_new(G_CALLBACK(self_selected_uri_changed_cb), self, NULL),
									   "Bonobo/Property:change:selected-uri",
									   NULL);
	    if (selfp->listener != CORBA_OBJECT_NIL)
	      {
		/* give the folder tree a decent height */
		gtk_widget_set_size_request(tree, -1, 150);

		self_set_widget(self, selfp->tree = tree);
		self_sync(self);

		goto end;	/* success */
	      }
	  }
      }
    
    /* failure */

    if (tree)
      gtk_widget_destroy(tree);
    self_contact_error(self);

  end:
    CORBA_Object_release(glue, NULL);
    CORBA_Object_release(control, NULL);
  }}
#line 371 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 152 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_contact_error (MNEvolutionMailboxProperties * self)
#line 377 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::contact_error"
#line 152 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 152 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 384 "mn-evolution-mailbox-properties.c"
{
#line 154 "mn-evolution-mailbox-properties.gob"
	
    GtkWidget *label;

    if (selfp->pbag != CORBA_OBJECT_NIL)
      {
	CORBA_Object_release(selfp->pbag, NULL);
	selfp->pbag = CORBA_OBJECT_NIL;
      }

    if (selfp->listener != CORBA_OBJECT_NIL)
      {
	CORBA_Object_release(selfp->listener, NULL);
	selfp->listener = CORBA_OBJECT_NIL;
      }

    label = gtk_label_new(_("Mail Notification can not contact Evolution. Make sure that Evolution is running and that the Evolution Mail Notification plugin is loaded."));

    gtk_misc_set_alignment(GTK_MISC(label), 0.0, 0.5);
    gtk_label_set_line_wrap(GTK_LABEL(label), TRUE);

    self_set_widget(self, label);
    selfp->tree = NULL;

    g_object_notify(G_OBJECT(self), "complete");
  }}
#line 412 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 180 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_set_widget (MNEvolutionMailboxProperties * self, GtkWidget * widget)
#line 418 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::set_widget"
#line 180 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 180 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 180 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (widget != NULL);
#line 180 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 429 "mn-evolution-mailbox-properties.c"
{
#line 182 "mn-evolution-mailbox-properties.gob"
	
    if (selfp->child)
      gtk_widget_destroy(selfp->child);

    gtk_widget_show(widget);
    gtk_box_pack_start(GTK_BOX(self), widget, TRUE, TRUE, 0);

    selfp->child = widget;
  }}
#line 441 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 192 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_selected_uri_changed_cb (BonoboListener * listener, const char * event_name, const CORBA_any * any, CORBA_Environment * env, gpointer user_data)
#line 447 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::selected_uri_changed_cb"
{
#line 198 "mn-evolution-mailbox-properties.gob"
	
    Self *self = user_data;
    const char *uri;
    CORBA_string name = NULL;

    uri = BONOBO_ARG_GET_STRING(any);

    if (uri && *uri)
      {
	GNOME_MailNotification_Evolution_Glue glue;
	CORBA_Environment name_env;

	glue = mn_corba_object_get_object(selfp->glue);
	if (glue != CORBA_OBJECT_NIL)
	  {
	    CORBA_exception_init(&name_env);

	    name = GNOME_MailNotification_Evolution_Glue_getFolderName(glue, uri, &name_env);
	    if (BONOBO_EX(&name_env))
	      name = NULL;

	    CORBA_exception_free(&name_env);

	    CORBA_Object_release(glue, NULL);
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
#line 493 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 240 "mn-evolution-mailbox-properties.gob"
static void 
mn_evolution_mailbox_properties_sync (MNEvolutionMailboxProperties * self)
#line 499 "mn-evolution-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::sync"
#line 240 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 240 "mn-evolution-mailbox-properties.gob"
	g_return_if_fail (MN_IS_EVOLUTION_MAILBOX_PROPERTIES (self));
#line 506 "mn-evolution-mailbox-properties.c"
{
#line 242 "mn-evolution-mailbox-properties.gob"
	
    g_return_if_fail(selfp->tree != NULL);

    if (selfp->uri)
      bonobo_widget_set_property(BONOBO_WIDGET(selfp->tree), "selected-uri", BONOBO_ARG_STRING, selfp->uri, NULL);
  }}
#line 515 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 249 "mn-evolution-mailbox-properties.gob"
static void 
___9_mn_evolution_mailbox_properties_set_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED, MNMailbox * mailbox)
#line 521 "mn-evolution-mailbox-properties.c"
#define PARENT_HANDLER(___properties,___mailbox) \
	{ if(MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox) \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox)(___properties,___mailbox); }
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::set_mailbox"
{
#line 251 "mn-evolution-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNEvolutionMailbox *evolution_mailbox = MN_EVOLUTION_MAILBOX(mailbox);

    g_free(selfp->uri);
    selfp->uri = g_strdup(evolution_mailbox->uri);

    g_free(selfp->name);
    selfp->name = g_strdup(evolution_mailbox->folder_name);

    if (selfp->tree)
      self_sync(self);
  }}
#line 542 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 265 "mn-evolution-mailbox-properties.gob"
static MNMailbox * 
___a_mn_evolution_mailbox_properties_get_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED)
#line 549 "mn-evolution-mailbox-properties.c"
#define PARENT_HANDLER(___properties) \
	((MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)? \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)(___properties): \
		((MNMailbox * )0))
{
#define __GOB_FUNCTION__ "MN:Evolution:Mailbox:Properties::get_mailbox"
{
#line 267 "mn-evolution-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNMailbox *mailbox;

    mailbox = PARENT_HANDLER(properties);

    g_object_set(mailbox,
		 "uri", selfp->uri,
		 "folder-name", selfp->name,
		 NULL);

    return mailbox;
  }}
#line 571 "mn-evolution-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER
