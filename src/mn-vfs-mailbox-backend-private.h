/* Generated by GOB (v2.0.14)   (do not edit directly) */

#ifndef __MN_VFS_MAILBOX_BACKEND_PRIVATE_H__
#define __MN_VFS_MAILBOX_BACKEND_PRIVATE_H__

#include "mn-vfs-mailbox-backend.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 26 "mn-vfs-mailbox-backend.gob"

#include "mn-locked-callback.h"

#line 18 "mn-vfs-mailbox-backend-private.h"
struct _MNVFSMailboxBackendPrivate {
#line 54 "mn-vfs-mailbox-backend.gob"
	MNLockedGSource * queue_check_source;
#line 22 "mn-vfs-mailbox-backend-private.h"
};
void 	mn_vfs_mailbox_backend_monitor	(MNVFSMailboxBackend * self, int check_id, const char * uri, GnomeVFSMonitorType type);
void 	mn_vfs_mailbox_backend_queue_check	(MNVFSMailboxBackend * self);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
