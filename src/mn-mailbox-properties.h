/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>
#include "mn-mailbox.h"

#ifndef __MN_MAILBOX_PROPERTIES_H__
#define __MN_MAILBOX_PROPERTIES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAILBOX_PROPERTIES	(mn_mailbox_properties_get_type())
#define MN_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mailbox_properties_get_type(), MNMailboxProperties)
#define MN_MAILBOX_PROPERTIES_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mailbox_properties_get_type(), MNMailboxProperties const)
#define MN_MAILBOX_PROPERTIES_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_mailbox_properties_get_type(), MNMailboxPropertiesClass)
#define MN_IS_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_mailbox_properties_get_type ())

#define MN_MAILBOX_PROPERTIES_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_mailbox_properties_get_type(), MNMailboxPropertiesClass)

/* Private structure type */
typedef struct _MNMailboxPropertiesPrivate MNMailboxPropertiesPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAILBOX_PROPERTIES__
#define __TYPEDEF_MN_MAILBOX_PROPERTIES__
typedef struct _MNMailboxProperties MNMailboxProperties;
#endif
struct _MNMailboxProperties {
	GObject __parent__;
	/*< private >*/
	GtkWidget * dialog; /* protected */
	GtkSizeGroup * label_size_group; /* protected */
	GtkSizeGroup * entry_size_group; /* protected */
	GtkSizeGroup * entry_button_size_group; /* protected */
	GSList * entries; /* protected */
	MNMailboxPropertiesPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNMailboxPropertiesClass MNMailboxPropertiesClass;
struct _MNMailboxPropertiesClass {
	GObjectClass __parent__;
	void (* activate) (MNMailboxProperties * self);
	void (* deactivate) (MNMailboxProperties * self);
	void (* set_mailbox) (MNMailboxProperties * self, MNMailbox * mailbox);
	MNMailbox * (* get_mailbox) (MNMailboxProperties * self);
	const char * type;
	const char * stock_id;
	const char * combo_label;
	gboolean no_check_delay_unless_complete;
};


/*
 * Public methods
 */
GType	mn_mailbox_properties_get_type	(void);
void 	mn_mailbox_properties_activate	(MNMailboxProperties * self);
void 	mn_mailbox_properties_deactivate	(MNMailboxProperties * self);
void 	mn_mailbox_properties_set_mailbox	(MNMailboxProperties * self,
					MNMailbox * mailbox);
MNMailbox * 	mn_mailbox_properties_get_mailbox	(MNMailboxProperties * self);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_MAILBOX_PROPERTIES_PROP_DIALOG(arg)    	"dialog", __extension__ ({GtkWidget * z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_GET_PROP_DIALOG(arg)	"dialog", __extension__ ({GtkWidget * *z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete", __extension__ ({gboolean *z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_CHECK_DELAY(arg)	"default_check_delay", __extension__ ({gint *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_MAILBOX_PROPERTIES_PROP_DIALOG(arg)    	"dialog",(GtkWidget * )(arg)
#define MN_MAILBOX_PROPERTIES_GET_PROP_DIALOG(arg)	"dialog",(GtkWidget * *)(arg)
#define MN_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete",(gboolean *)(arg)
#define MN_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name",(gchar **)(arg)
#define MN_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_CHECK_DELAY(arg)	"default_check_delay",(gint *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
