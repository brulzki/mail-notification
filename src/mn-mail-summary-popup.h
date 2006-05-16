/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>

#ifndef __MN_MAIL_SUMMARY_POPUP_H__
#define __MN_MAIL_SUMMARY_POPUP_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef enum {
	MN_MAIL_SUMMARY_POPUP_LAYOUT_STANDARD,
	MN_MAIL_SUMMARY_POPUP_LAYOUT_COMPACT
} MNMailSummaryPopupLayout;
#define MN_TYPE_MAIL_SUMMARY_POPUP_LAYOUT mn_mail_summary_popup_layout_get_type()
GType mn_mail_summary_popup_layout_get_type (void);


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAIL_SUMMARY_POPUP	(mn_mail_summary_popup_get_type())
#define MN_MAIL_SUMMARY_POPUP(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mail_summary_popup_get_type(), MNMailSummaryPopup)
#define MN_MAIL_SUMMARY_POPUP_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mail_summary_popup_get_type(), MNMailSummaryPopup const)
#define MN_MAIL_SUMMARY_POPUP_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_mail_summary_popup_get_type(), MNMailSummaryPopupClass)
#define MN_IS_MAIL_SUMMARY_POPUP(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_mail_summary_popup_get_type ())

#define MN_MAIL_SUMMARY_POPUP_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_mail_summary_popup_get_type(), MNMailSummaryPopupClass)

/* Private structure type */
typedef struct _MNMailSummaryPopupPrivate MNMailSummaryPopupPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAIL_SUMMARY_POPUP__
#define __TYPEDEF_MN_MAIL_SUMMARY_POPUP__
typedef struct _MNMailSummaryPopup MNMailSummaryPopup;
#endif
struct _MNMailSummaryPopup {
	GtkWindow __parent__;
	/*< private >*/
	MNMailSummaryPopupPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNMailSummaryPopupClass MNMailSummaryPopupClass;
struct _MNMailSummaryPopupClass {
	GtkWindowClass __parent__;
};


/*
 * Public methods
 */
GType	mn_mail_summary_popup_get_type	(void);
void 	mn_mail_summary_popup_set_messages	(MNMailSummaryPopup * self,
					GSList * messages);
void 	mn_mail_summary_popup_reset_timeout	(MNMailSummaryPopup * self);
GtkWidget * 	mn_mail_summary_popup_new	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
