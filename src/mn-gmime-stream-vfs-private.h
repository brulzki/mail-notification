/* Generated by GOB (v2.0.14)   (do not edit directly) */

#ifndef __MN_GMIME_STREAM_VFS_PRIVATE_H__
#define __MN_GMIME_STREAM_VFS_PRIVATE_H__

#include "mn-gmime-stream-vfs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct _MNGMimeStreamVFSPrivate {
#line 64 "mn-gmime-stream-vfs.gob"
	GnomeVFSHandle * handle;
#line 65 "mn-gmime-stream-vfs.gob"
	char * uri;
#line 66 "mn-gmime-stream-vfs.gob"
	gboolean eof;
#line 20 "mn-gmime-stream-vfs-private.h"
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
