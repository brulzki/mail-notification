/* Generated by GOB (v2.0.12)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include "mn-pi-mailbox-properties.h"

#ifndef __MN_POP3_MAILBOX_PROPERTIES_H__
#define __MN_POP3_MAILBOX_PROPERTIES_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_POP3_MAILBOX_PROPERTIES	(mn_pop3_mailbox_properties_get_type())
#define MN_POP3_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_pop3_mailbox_properties_get_type(), MNPOP3MailboxProperties)
#define MN_POP3_MAILBOX_PROPERTIES_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_pop3_mailbox_properties_get_type(), MNPOP3MailboxProperties const)
#define MN_POP3_MAILBOX_PROPERTIES_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_pop3_mailbox_properties_get_type(), MNPOP3MailboxPropertiesClass)
#define MN_IS_POP3_MAILBOX_PROPERTIES(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_pop3_mailbox_properties_get_type ())

#define MN_POP3_MAILBOX_PROPERTIES_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_pop3_mailbox_properties_get_type(), MNPOP3MailboxPropertiesClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_POP3_MAILBOX_PROPERTIES__
#define __TYPEDEF_MN_POP3_MAILBOX_PROPERTIES__
typedef struct _MNPOP3MailboxProperties MNPOP3MailboxProperties;
#endif
struct _MNPOP3MailboxProperties {
	MNPIMailboxProperties __parent__;
};

/*
 * Class definition
 */
typedef struct _MNPOP3MailboxPropertiesClass MNPOP3MailboxPropertiesClass;
struct _MNPOP3MailboxPropertiesClass {
	MNPIMailboxPropertiesClass __parent__;
};


/*
 * Public methods
 */
GType	mn_pop3_mailbox_properties_get_type	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_POP3_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete", __extension__ ({gboolean *z = (arg); z;})
#define MN_POP3_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_POP3_MAILBOX_PROPERTIES_GET_PROP_COMPLETE(arg)	"complete",(gboolean *)(arg)
#define MN_POP3_MAILBOX_PROPERTIES_GET_PROP_DEFAULT_NAME(arg)	"default_name",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
