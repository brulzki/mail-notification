/* Generated by GOB (v2.0.14)   (do not edit directly) */

#ifndef __MN_PROPERTIES_DIALOG_PRIVATE_H__
#define __MN_PROPERTIES_DIALOG_PRIVATE_H__

#include "mn-properties-dialog.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 26 "mn-properties-dialog.gob"

#include "mn-mailbox.h"

#line 18 "mn-properties-dialog-private.h"
struct _MNPropertiesDialogPrivate {
#line 46 "mn-properties-dialog.gob"
	GtkWidget * notebook;
#line 49 "mn-properties-dialog.gob"
	GtkWidget * play_sound_hbox;
#line 50 "mn-properties-dialog.gob"
	GtkWidget * play_sound_check;
#line 51 "mn-properties-dialog.gob"
	GtkWidget * play_sound_file_chooser_button;
#line 52 "mn-properties-dialog.gob"
	GtkWidget * scrolled;
#line 53 "mn-properties-dialog.gob"
	GtkWidget * list;
#line 54 "mn-properties-dialog.gob"
	GtkWidget * selected_label;
#line 55 "mn-properties-dialog.gob"
	GtkWidget * add;
#line 56 "mn-properties-dialog.gob"
	GtkWidget * remove;
#line 57 "mn-properties-dialog.gob"
	GtkWidget * properties;
#line 60 "mn-properties-dialog.gob"
	GtkWidget * icon_action_mail_reader_radio;
#line 61 "mn-properties-dialog.gob"
	GtkWidget * icon_action_open_latest_message_radio;
#line 62 "mn-properties-dialog.gob"
	GtkWidget * icon_action_consider_new_mail_as_read_radio;
#line 63 "mn-properties-dialog.gob"
	GtkWidget * icon_action_update_radio;
#line 66 "mn-properties-dialog.gob"
	GtkWidget * popups_enable_check;
#line 67 "mn-properties-dialog.gob"
	GtkWidget * popups_position_section_label;
#line 68 "mn-properties-dialog.gob"
	GtkWidget * popups_position_attached_radio;
#line 69 "mn-properties-dialog.gob"
	GtkWidget * popups_position_free_radio;
#line 70 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_section_label;
#line 71 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_default_radio;
#line 72 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_never_radio;
#line 73 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_after_radio;
#line 74 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_minutes_spin;
#line 75 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_minutes_label;
#line 76 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_seconds_spin;
#line 77 "mn-properties-dialog.gob"
	GtkWidget * popups_expiration_seconds_label;
#line 79 "mn-properties-dialog.gob"
	MNMailbox * test_mailbox;
#line 74 "mn-properties-dialog-private.h"
};
void 	mn_properties_dialog_toggled_h	(MNPropertiesDialog * self, GtkToggleButton * button);
void 	mn_properties_dialog_add_clicked_h	(MNPropertiesDialog * self, GtkButton * button);
void 	mn_properties_dialog_remove_clicked_h	(MNPropertiesDialog * self, GtkButton * button);
void 	mn_properties_dialog_properties_clicked_h	(MNPropertiesDialog * self, GtkButton * button);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
