/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-vfs-mailbox-backend.h"

#ifndef __MN_MAILDIR_MAILBOX_BACKEND_H__
#define __MN_MAILDIR_MAILBOX_BACKEND_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAILDIR_MAILBOX_BACKEND	(mn_maildir_mailbox_backend_get_type())
#define MN_MAILDIR_MAILBOX_BACKEND(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_maildir_mailbox_backend_get_type(), MNMaildirMailboxBackend)
#define MN_MAILDIR_MAILBOX_BACKEND_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_maildir_mailbox_backend_get_type(), MNMaildirMailboxBackend const)
#define MN_MAILDIR_MAILBOX_BACKEND_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_maildir_mailbox_backend_get_type(), MNMaildirMailboxBackendClass)
#define MN_IS_MAILDIR_MAILBOX_BACKEND(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_maildir_mailbox_backend_get_type ())

#define MN_MAILDIR_MAILBOX_BACKEND_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_maildir_mailbox_backend_get_type(), MNMaildirMailboxBackendClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAILDIR_MAILBOX_BACKEND__
#define __TYPEDEF_MN_MAILDIR_MAILBOX_BACKEND__
typedef struct _MNMaildirMailboxBackend MNMaildirMailboxBackend;
#endif
struct _MNMaildirMailboxBackend {
	MNVFSMailboxBackend __parent__;
};

/*
 * Class definition
 */
typedef struct _MNMaildirMailboxBackendClass MNMaildirMailboxBackendClass;
struct _MNMaildirMailboxBackendClass {
	MNVFSMailboxBackendClass __parent__;
};


/*
 * Public methods
 */
GType	mn_maildir_mailbox_backend_get_type	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
