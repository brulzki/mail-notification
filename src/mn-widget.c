#include "mn-widget.h"

/*
 * This file is meant to workaround limitations of GOB2.
 * mail-notification supports both GTK2 and GTK3.
 * Several overridable methods in GTK class have changed
 * between GTK2 and GTK3.
 */

G_DEFINE_TYPE(MnWidget, mn_widget, GTK_TYPE_WIDGET)

static void
mn_widget_init(MnWidget *obj)
{
}

/* GTK2 */
#if !GTK_CHECK_VERSION(3,0,0)
static gboolean
mn_expose_event (MnWidget *widget, GdkEventExpose *event)
{
    MnWidgetClass *klass = MN_WIDGET_GET_CLASS(widget);

    if (klass->mn_expose_event) {
        return klass->mn_expose_event(widget, event);
    } else {
        return FALSE;
    }
}

static void
mn_size_request (MnWidget *widget, GtkRequisition *requisition)
{
    MnWidgetClass *klass = MN_WIDGET_GET_CLASS(widget);

    if (klass->mn_size_request) {
        klass->mn_size_request(widget, requisition);
    }
}
#endif

/* GTK3 */
#if GTK_CHECK_VERSION(3,0,0)
static gboolean
mn_draw (MnWidget *widget, cairo_t *cr)
{
    MnWidgetClass *klass = MN_WIDGET_GET_CLASS(widget);

    if (klass->mn_draw) {
        klass->mn_draw(widget, cr);
    }
}

static void
mn_get_preferred_height (MnWidget *widget, gint *minimum_height, gint *natural_height)
{
    MnWidgetClass *klass = MN_WIDGET_GET_CLASS(widget);

    if (klass->mn_get_preferred_height) {
        klass->mn_get_preferred_height(widget, minimum_height, natural_height);
    }
}

static void
mn_get_preferred_width (MnWidget *widget, gint *minimum_width, gint *natural_width)
{
    MnWidgetClass *klass = MN_WIDGET_GET_CLASS(widget);

    if (klass->mn_get_preferred_width) {
        klass->mn_get_preferred_width(widget, minimum_width, natural_width);
    }
}
#endif

static void
mn_widget_class_init (MnWidgetClass *klass)
{
    GtkWidgetClass *parent_class = GTK_WIDGET_CLASS(klass);

#if GTK_CHECK_VERSION(3,0,0)
    parent_class->draw = mn_draw;
    parent_class->get_preferred_height = mn_get_preferred_height;
    parent_class->get_preferred_width = mn_get_preferred_width;
#else
   parent_class->expose_event = mn_expose_event;
   parent_class->size_request = mn_size_request;
#endif
}
