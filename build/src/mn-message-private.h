/* Generated by GOB (v2.0.15)   (do not edit directly) */

#ifndef __MN_MESSAGE_PRIVATE_H__
#define __MN_MESSAGE_PRIVATE_H__

#include "mn-message.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 64 "src/mn-message.gob"

#include "mn-xml.h"

typedef enum
{
  /* include in the XML summary and allow as a command format */
  MN_MESSAGE_PARAM_EXPORT	= MN_XML_PARAM_EXPORT,
} MNMessageParamFlags;

typedef GError *(*MNMessageActionPerformCallback) (MNMessage *message, gpointer data);

#line 26 "mn-message-private.h"
#line 375 "src/mn-message.gob"
void 	mn_message_perform_action_in_thread	(MNMessageActionRequest * request, MNMessageActionPerformCallback callback, gpointer user_data);
#line 29 "mn-message-private.h"
#line 422 "src/mn-message.gob"
void 	mn_message_action_done	(MNMessageActionRequest * request, GError * err);
#line 32 "mn-message-private.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
