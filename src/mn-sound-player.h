/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>
#ifndef __MN_SOUND_PLAYER_H__
#define __MN_SOUND_PLAYER_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



#include <gtk/gtk.h>


/*
 * Type checking and casting macros
 */
#define MN_TYPE_SOUND_PLAYER	(mn_sound_player_get_type())
#define MN_SOUND_PLAYER(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_sound_player_get_type(), MNSoundPlayer)
#define MN_SOUND_PLAYER_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_sound_player_get_type(), MNSoundPlayer const)
#define MN_SOUND_PLAYER_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_sound_player_get_type(), MNSoundPlayerClass)
#define MN_IS_SOUND_PLAYER(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_sound_player_get_type ())

#define MN_SOUND_PLAYER_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_sound_player_get_type(), MNSoundPlayerClass)

/* Private structure type */
typedef struct _MNSoundPlayerPrivate MNSoundPlayerPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_SOUND_PLAYER__
#define __TYPEDEF_MN_SOUND_PLAYER__
typedef struct _MNSoundPlayer MNSoundPlayer;
#endif
struct _MNSoundPlayer {
	GObject __parent__;
	/*< private >*/
	MNSoundPlayerPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNSoundPlayerClass MNSoundPlayerClass;
struct _MNSoundPlayerClass {
	GObjectClass __parent__;
};


/*
 * Public methods
 */
GType	mn_sound_player_get_type	(void);
gboolean 	mn_sound_player_get_can_play	(MNSoundPlayer * self);
gboolean 	mn_sound_player_get_can_stop	(MNSoundPlayer * self);
void 	mn_sound_player_play	(MNSoundPlayer * self,
					const char * filename,
					GtkWindow * parent);
void 	mn_sound_player_stop	(MNSoundPlayer * self);
MNSoundPlayer * 	mn_sound_player_new	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_SOUND_PLAYER_GET_PROP_CAN_PLAY(arg)	"can_play", __extension__ ({gboolean *z = (arg); z;})
#define MN_SOUND_PLAYER_GET_PROP_CAN_STOP(arg)	"can_stop", __extension__ ({gboolean *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_SOUND_PLAYER_GET_PROP_CAN_PLAY(arg)	"can_play",(gboolean *)(arg)
#define MN_SOUND_PLAYER_GET_PROP_CAN_STOP(arg)	"can_stop",(gboolean *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
