/* Generated by GOB (v2.0.12)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-mailbox-properties.h"

#ifndef __MN_SYSTEM_VFS_MAILBOX_PROPERTIES_H__
#define __MN_SYSTEM_VFS_MAILBOX_PROPERTIES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_SYSTEM_VFS_MAILBOX_PROPERTIES	(mn_system_vfs_mailbox_properties_get_type())
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_system_vfs_mailbox_properties_get_type(), MNSystemVFSMailboxProperties)
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_system_vfs_mailbox_properties_get_type(), MNSystemVFSMailboxProperties const)
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_system_vfs_mailbox_properties_get_type(), MNSystemVFSMailboxPropertiesClass)
#define MN_IS_SYSTEM_VFS_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_system_vfs_mailbox_properties_get_type ())

#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_system_vfs_mailbox_properties_get_type(), MNSystemVFSMailboxPropertiesClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_SYSTEM_VFS_MAILBOX_PROPERTIES__
#define __TYPEDEF_MN_SYSTEM_VFS_MAILBOX_PROPERTIES__
typedef struct _MNSystemVFSMailboxProperties MNSystemVFSMailboxProperties;
#endif
struct _MNSystemVFSMailboxProperties {
	MNMailboxProperties __parent__;
};

/*
 * Class definition
 */
typedef struct _MNSystemVFSMailboxPropertiesClass MNSystemVFSMailboxPropertiesClass;
struct _MNSystemVFSMailboxPropertiesClass {
	MNMailboxPropertiesClass __parent__;
};


/*
 * Public methods
 */
GType	mn_system_vfs_mailbox_properties_get_type	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete", __extension__ ({gboolean *z = (arg); z;})
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete",(gboolean *)(arg)
#define MN_SYSTEM_VFS_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
