/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-mailbox.h"

#ifndef __MN_REENTRANT_MAILBOX_H__
#define __MN_REENTRANT_MAILBOX_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_REENTRANT_MAILBOX	(mn_reentrant_mailbox_get_type())
#define MN_REENTRANT_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_reentrant_mailbox_get_type(), MNReentrantMailbox)
#define MN_REENTRANT_MAILBOX_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_reentrant_mailbox_get_type(), MNReentrantMailbox const)
#define MN_REENTRANT_MAILBOX_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_reentrant_mailbox_get_type(), MNReentrantMailboxClass)
#define MN_IS_REENTRANT_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_reentrant_mailbox_get_type ())

#define MN_REENTRANT_MAILBOX_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_reentrant_mailbox_get_type(), MNReentrantMailboxClass)

/* Private structure type */
typedef struct _MNReentrantMailboxPrivate MNReentrantMailboxPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_REENTRANT_MAILBOX__
#define __TYPEDEF_MN_REENTRANT_MAILBOX__
typedef struct _MNReentrantMailbox MNReentrantMailbox;
#endif
struct _MNReentrantMailbox {
	MNMailbox __parent__;
	/*< private >*/
	MNReentrantMailboxPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNReentrantMailboxClass MNReentrantMailboxClass;
struct _MNReentrantMailboxClass {
	MNMailboxClass __parent__;
	void (* reentrant_check) (MNReentrantMailbox * self, int check_id);
};


/*
 * Public methods
 */
GType	mn_reentrant_mailbox_get_type	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
