/* Generated by GOB (v2.0.14)   (do not edit directly) */

#ifndef __MN_IMAP_MAILBOX_PRIVATE_H__
#define __MN_IMAP_MAILBOX_PRIVATE_H__

#include "mn-imap-mailbox.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 40 "mn-imap-mailbox.gob"

#include "mn-client-session.h"

#line 18 "mn-imap-mailbox-private.h"
struct _MNIMAPMailboxPrivate {
#line 161 "mn-imap-mailbox.gob"
	int removed;
#line 164 "mn-imap-mailbox.gob"
	GMutex * mutex;
#line 166 "mn-imap-mailbox.gob"
	MNClientSessionPrivate * idle_session;
#line 26 "mn-imap-mailbox-private.h"
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
