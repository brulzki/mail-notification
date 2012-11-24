#ifndef _MN_WIDGET_H_
#define _MN_WIDGET_H_

#include <gtk/gtk.h>

typedef struct MnWidget MnWidget;
typedef struct MnWidgetClass MnWidgetClass;

#define MN_TYPE_WIDGET              (mn_widget_get_type ())
#define MN_WIDGET(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), MN_TYPE_WIDGET, MnWidget))
#define MN_WIDGET_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), MN_TYPE_WIDGET, MnWidgetClass))

struct MnWidget {
    GtkWidget parent;
};

struct MnWidgetClass {
    GtkWidgetClass parent;

    /* GTK2 */
    gboolean (* mn_expose_event)         (MnWidget *widget, GdkEventExpose *event);
    void     (* mn_size_request)         (MnWidget *widget, GtkRequisition *requisition);

    /* GTK3 */
    gboolean (* mn_draw)                 (MnWidget *widget, cairo_t *cr);
    void     (* mn_get_preferred_height) (MnWidget *widget, gint *minimum_height, gint *natural_height);
    void     (* mn_get_preferred_width)  (MnWidget *widget, gint *minimum_width, gint *natural_width);
};

GType mn_widget_get_type(void);

#endif /* _MN_WIDGET_H_ */
