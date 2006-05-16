/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>
#include "mn-authenticated-mailbox-properties.h"
#include "mn-pi-mailbox.h"

#ifndef __MN_PI_MAILBOX_PROPERTIES_H__
#define __MN_PI_MAILBOX_PROPERTIES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_PI_MAILBOX_PROPERTIES	(mn_pi_mailbox_properties_get_type())
#define MN_PI_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_pi_mailbox_properties_get_type(), MNPIMailboxProperties)
#define MN_PI_MAILBOX_PROPERTIES_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_pi_mailbox_properties_get_type(), MNPIMailboxProperties const)
#define MN_PI_MAILBOX_PROPERTIES_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_pi_mailbox_properties_get_type(), MNPIMailboxPropertiesClass)
#define MN_IS_PI_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_pi_mailbox_properties_get_type ())

#define MN_PI_MAILBOX_PROPERTIES_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_pi_mailbox_properties_get_type(), MNPIMailboxPropertiesClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_PI_MAILBOX_PROPERTIES__
#define __TYPEDEF_MN_PI_MAILBOX_PROPERTIES__
typedef struct _MNPIMailboxProperties MNPIMailboxProperties;
#endif
struct _MNPIMailboxProperties {
	MNAuthenticatedMailboxProperties __parent__;
	/*< private >*/
	GtkWidget * hostname_entry; /* protected */
	GtkWidget * details_vbox; /* protected */
	GtkSizeGroup * details_size_group; /* protected */
	GtkWidget * conn_radio[MN_PI_MAILBOX_N_CONNECTION_TYPES]; /* protected */
	GtkWidget * port_spin[MN_PI_MAILBOX_N_CONNECTION_TYPES]; /* protected */
	GtkWidget * auth_combo; /* protected */
};

/*
 * Class definition
 */
typedef struct _MNPIMailboxPropertiesClass MNPIMailboxPropertiesClass;
struct _MNPIMailboxPropertiesClass {
	MNAuthenticatedMailboxPropertiesClass __parent__;
};


/*
 * Public methods
 */
GType	mn_pi_mailbox_properties_get_type	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
