/* Generated by GOB (v2.0.14)   (do not edit directly) */

#ifndef __MN_BLINKING_IMAGE_PRIVATE_H__
#define __MN_BLINKING_IMAGE_PRIVATE_H__

#include "mn-blinking-image.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 25 "mn-blinking-image.gob"

#include "mn-locked-callback.h"

#line 18 "mn-blinking-image-private.h"
struct _MNBlinkingImagePrivate {
#line 36 "mn-blinking-image.gob"
	gboolean blinking;
#line 58 "mn-blinking-image.gob"
	MNLockedGSource * timeout_source;
#line 59 "mn-blinking-image.gob"
	gboolean is_on;
#line 61 "mn-blinking-image.gob"
	char * stock_id;
#line 62 "mn-blinking-image.gob"
	GtkIconSize icon_size;
#line 30 "mn-blinking-image-private.h"
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
