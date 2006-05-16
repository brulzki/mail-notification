/* 
 * Copyright (C) 2003-2006 Jean-Yves Lefort <jylefort@brutele.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _MN_CONF_H
#define _MN_CONF_H

#include <stdarg.h>
#include <gtk/gtk.h>
#include <eel/eel.h>
#include "mn-util.h"
#include "mn-locked-callback.h"

#define MN_CONF_NAMESPACE \
  "/apps/mail-notification"
#define MN_CONF_COMMANDS_NAMESPACE \
  MN_CONF_NAMESPACE "/commands"
#define MN_CONF_COMMANDS_NEW_MAIL_NAMESPACE \
  MN_CONF_COMMANDS_NAMESPACE "/new-mail"
#define MN_CONF_COMMANDS_NEW_MAIL_ENABLED \
  MN_CONF_COMMANDS_NEW_MAIL_NAMESPACE "/enabled"
#define MN_CONF_COMMANDS_NEW_MAIL_COMMAND \
  MN_CONF_COMMANDS_NEW_MAIL_NAMESPACE "/command"
#define MN_CONF_COMMANDS_MAIL_READ_NAMESPACE \
  MN_CONF_COMMANDS_NAMESPACE "/mail-read"
#define MN_CONF_COMMANDS_MAIL_READ_ENABLED \
  MN_CONF_COMMANDS_MAIL_READ_NAMESPACE "/enabled"
#define MN_CONF_COMMANDS_MAIL_READ_COMMAND \
  MN_CONF_COMMANDS_MAIL_READ_NAMESPACE "/command"
#define MN_CONF_UI_NAMESPACE \
  MN_CONF_NAMESPACE "/ui"
#define MN_CONF_PROPERTIES_DIALOG \
  MN_CONF_UI_NAMESPACE "/properties-dialog"
#define MN_CONF_BLINK_ON_ERRORS \
  MN_CONF_NAMESPACE "/blink-on-errors"
#define MN_CONF_TRUSTED_X509_CERTIFICATES \
  MN_CONF_NAMESPACE "/trusted-x509-certificates"
#define MN_CONF_TRUSTED_SERVERS \
  MN_CONF_NAMESPACE "/trusted-servers"
#define MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE \
  MN_CONF_NAMESPACE "/mail-summary-popup"
#define MN_CONF_MAIL_SUMMARY_POPUP_ENABLE \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/enable"
#define MN_CONF_MAIL_SUMMARY_POPUP_AUTOCLOSE \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/autoclose"
#define MN_CONF_MAIL_SUMMARY_POPUP_AUTOCLOSE_DELAY_NAMESPACE \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/autoclose-delay"
#define MN_CONF_MAIL_SUMMARY_POPUP_AUTOCLOSE_DELAY_MINUTES \
  MN_CONF_MAIL_SUMMARY_POPUP_AUTOCLOSE_DELAY_NAMESPACE "/minutes"
#define MN_CONF_MAIL_SUMMARY_POPUP_AUTOCLOSE_DELAY_SECONDS \
  MN_CONF_MAIL_SUMMARY_POPUP_AUTOCLOSE_DELAY_NAMESPACE "/seconds"
#define MN_CONF_MAIL_SUMMARY_POPUP_LAYOUT \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/layout"
#define MN_CONF_MAIL_SUMMARY_POPUP_POSITION \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/position"
#define MN_CONF_MAIL_SUMMARY_POPUP_OFFSET_NAMESPACE \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/offset"
#define MN_CONF_MAIL_SUMMARY_POPUP_HORIZONTAL_OFFSET \
  MN_CONF_MAIL_SUMMARY_POPUP_OFFSET_NAMESPACE "/horizontal"
#define MN_CONF_MAIL_SUMMARY_POPUP_VERTICAL_OFFSET \
  MN_CONF_MAIL_SUMMARY_POPUP_OFFSET_NAMESPACE "/vertical"
#define MN_CONF_MAIL_SUMMARY_POPUP_ONLY_RECENT \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/only-recent"
#define MN_CONF_MAIL_SUMMARY_POPUP_FONTS_NAMESPACE \
  MN_CONF_MAIL_SUMMARY_POPUP_NAMESPACE "/fonts"
#define MN_CONF_MAIL_SUMMARY_POPUP_FONTS_ASPECT_SOURCE \
  MN_CONF_MAIL_SUMMARY_POPUP_FONTS_NAMESPACE "/aspect-source"
#define MN_CONF_MAIL_SUMMARY_POPUP_FONTS_TITLE_NAMESPACE \
  MN_CONF_MAIL_SUMMARY_POPUP_FONTS_NAMESPACE "/title"
#define MN_CONF_MAIL_SUMMARY_POPUP_FONTS_TITLE_FONT \
  MN_CONF_MAIL_SUMMARY_POPUP_FONTS_TITLE_NAMESPACE "/font"
#define MN_CONF_MAIL_SUMMARY_POPUP_FONTS_CONTENTS_NAMESPACE \
  MN_CONF_MAIL_SUMMARY_POPUP_FONTS_NAMESPACE "/contents"
#define MN_CONF_MAIL_SUMMARY_POPUP_FONTS_CONTENTS_FONT \
  MN_CONF_MAIL_SUMMARY_POPUP_FONTS_CONTENTS_NAMESPACE "/font"
#define MN_CONF_DISPLAY_SEEN_MAIL \
  MN_CONF_NAMESPACE "/display-seen-mail"
#define MN_CONF_TOOLTIP_MAIL_SUMMARY \
  MN_CONF_NAMESPACE "/tooltip-mail-summary"
#define MN_CONF_ALWAYS_DISPLAY_ICON \
  MN_CONF_NAMESPACE "/always-display-icon"
#define MN_CONF_CLICK_ACTION \
  MN_CONF_NAMESPACE "/click-action"

/* obsolete keys */
#define MN_CONF_OBSOLETE_MAILBOXES \
  MN_CONF_NAMESPACE "/mailboxes"

/* foreign keys */
#define MN_CONF_GNOME_MAIL_READER_NAMESPACE \
  "/desktop/gnome/url-handlers/mailto"
#define MN_CONF_GNOME_MAIL_READER_COMMAND \
  MN_CONF_GNOME_MAIL_READER_NAMESPACE "/command"

extern const char *mn_conf_dot_dir;

void		mn_conf_init		(void);
void		mn_conf_unset_obsolete	(void);

void		mn_conf_recursive_unset	(const char	*key,
					 GConfUnsetFlags flags);

gboolean	mn_conf_is_set		(const char	*key);

void		mn_conf_set_value	(const char	*key,
					 const GConfValue *value);

void		mn_conf_link		(gpointer	object,
					 ...);
void		mn_conf_link_combo_box_to_string (GtkComboBox	*combo,
						  int		string_column,
						  const char	*key);
void		mn_conf_link_radio_group_to_enum (GType		enum_type,
						  const char	*key,
						  ...);

int		mn_conf_get_enum_value	(GType		enum_type,
					 const char	*key);

unsigned int	mn_conf_notification_add_full	(const char		*key,
						 GConfClientNotifyFunc	callback,
						 gpointer		user_data,
						 GFreeFunc		destroy_notify);

gboolean	mn_conf_has_command		(const char	*namespace);
void		mn_conf_execute_command		(const char	*conf_key,
						 gboolean	strip_format);

MNLockedGSource *mn_conf_timeout_add_gdk_locked	(const char	*minutes_key,
						 const char	*seconds_key,
						 GSourceFunc	function,
						 gpointer	data);

#endif /* _MN_CONF_H */
