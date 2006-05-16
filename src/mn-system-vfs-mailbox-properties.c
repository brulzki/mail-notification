/* Generated by GOB (v2.0.14)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 14

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-system-vfs-mailbox-properties.h"

#include "mn-system-vfs-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 25 "mn-system-vfs-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include <libgnomevfs/gnome-vfs-utils.h>
#include "mn-mailbox-properties.h"
#include "mn-system-vfs-mailbox.h"
#include "mn-stock.h"

#line 35 "mn-system-vfs-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_SYSTEM_VFS_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_SYSTEM_VFS_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_SYSTEM_VFS_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_SYSTEM_VFS_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_SYSTEM_VFS_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_SYSTEM_VFS_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNSystemVFSMailboxProperties Self;
typedef MNSystemVFSMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void mn_system_vfs_mailbox_properties_class_init (MNSystemVFSMailboxPropertiesClass * class) G_GNUC_UNUSED;
static void mn_system_vfs_mailbox_properties_init (MNSystemVFSMailboxProperties * self) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_COMPLETE,
	PROP_DEFAULT_NAME
};

/* pointer to the class of our parent */
static MNMailboxPropertiesClass *parent_class = NULL;

GType
mn_system_vfs_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNSystemVFSMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_system_vfs_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNSystemVFSMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_system_vfs_mailbox_properties_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_MAILBOX_PROPERTIES, "MNSystemVFSMailboxProperties", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNSystemVFSMailboxProperties *)g_object_new(mn_system_vfs_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNSystemVFSMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNSystemVFSMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNSystemVFSMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNSystemVFSMailboxProperties *)g_object_new_valist (mn_system_vfs_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}

#line 42 "mn-system-vfs-mailbox-properties.gob"
static void 
mn_system_vfs_mailbox_properties_class_init (MNSystemVFSMailboxPropertiesClass * class G_GNUC_UNUSED)
#line 108 "mn-system-vfs-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:System:VFS:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) class;

	parent_class = g_type_class_ref (MN_TYPE_MAILBOX_PROPERTIES);

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
#line 43 "mn-system-vfs-mailbox-properties.gob"

    MNMailboxPropertiesClass *p_class = MN_MAILBOX_PROPERTIES_CLASS(class);

    p_class->type = "system-vfs";
    p_class->stock_id = MN_STOCK_SYSTEM_MAILBOX;
    p_class->combo_label = _("System mailbox");
  
#line 133 "mn-system-vfs-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__
#line 51 "mn-system-vfs-mailbox-properties.gob"
static void 
mn_system_vfs_mailbox_properties_init (MNSystemVFSMailboxProperties * self G_GNUC_UNUSED)
#line 140 "mn-system-vfs-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:System:VFS:Mailbox:Properties::init"
 {
#line 52 "mn-system-vfs-mailbox-properties.gob"

    GtkWidget *label;
    const char *system_uri;

    label = gtk_label_new(NULL);

    gtk_misc_set_alignment(GTK_MISC(label), 0.0, 0.5);
    gtk_label_set_line_wrap(GTK_LABEL(label), TRUE);
    gtk_label_set_selectable(GTK_LABEL(label), TRUE);

    system_uri = mn_system_vfs_mailbox_get_uri();
    if (system_uri)
      {
	char *path;
	char *markup;

	path = gnome_vfs_get_local_path_from_uri(system_uri);

	markup = g_markup_printf_escaped(_("Your system mailbox is <span weight=\"bold\">%s</span>."), path ? path : system_uri);
	gtk_label_set_markup(GTK_LABEL(label), markup);
	g_free(markup);

	g_free(path);
      }
    else
      gtk_label_set_text(GTK_LABEL(label), _("The location of your system mailbox could not be detected. Check the MAIL environment variable."));

    gtk_widget_show(label);
    gtk_box_pack_start(GTK_BOX(self), label, FALSE, FALSE, 0);
  
#line 175 "mn-system-vfs-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:System:VFS:Mailbox:Properties::get_property"
{
	MNSystemVFSMailboxProperties *self G_GNUC_UNUSED;

	self = MN_SYSTEM_VFS_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_COMPLETE:
		{
#line 37 "mn-system-vfs-mailbox-properties.gob"
 g_value_set_boolean(VAL, mn_system_vfs_mailbox_get_uri() != NULL); 
#line 196 "mn-system-vfs-mailbox-properties.c"
		}
		break;
	case PROP_DEFAULT_NAME:
		{
#line 40 "mn-system-vfs-mailbox-properties.gob"
 g_value_set_string(VAL, _("System mailbox")); 
#line 203 "mn-system-vfs-mailbox-properties.c"
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


