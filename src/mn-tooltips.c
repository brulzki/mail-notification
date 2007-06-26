/* Generated by GOB (v2.0.14)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 14

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-tooltips.h"

#include "mn-tooltips-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 43 "mn-tooltips.gob"

#include <eel/eel.h>
#include "mn-util.h"

#define TOOLTIPS_DATA			"mn-tooltips-data"
#define TOOLTIPS_INFO			"mn-tooltips-info"
#define TOOLTIPS_KEYBOARD_MODE		"gtk-tooltips-keyboard-mode" /* compatible with GtkTooltips */

#define DELAY 500			/* Default delay in ms */
#define STICKY_DELAY 0			/* Delay before popping up next tip
					 * if we're sticky
					 */
#define STICKY_REVERT_DELAY 1000	/* Delay before sticky tooltips revert
					 * to normal
					 */

/* The private flags that are used in the private_flags member of GtkWidget.
 */
typedef enum
{
  PRIVATE_GTK_LEAVE_PENDING	= 1 <<  4
} GtkPrivateFlags;

/* Macros for extracting a widgets private_flags from GtkWidget.
 */
#define GTK_PRIVATE_FLAGS(wid)            (GTK_WIDGET (wid)->private_flags)

/* Macros for setting and clearing private widget flags.
 * we use a preprocessor string concatenation here for a clear
 * flags/private_flags distinction at the cost of single flag operations.
 */
#define GTK_PRIVATE_SET_FLAG(wid,flag)    G_STMT_START{ (GTK_PRIVATE_FLAGS (wid) |= (PRIVATE_ ## flag)); }G_STMT_END

#line 60 "mn-tooltips.c"
/* self casting macros */
#define SELF(x) MN_TOOLTIPS(x)
#define SELF_CONST(x) MN_TOOLTIPS_CONST(x)
#define IS_SELF(x) MN_IS_TOOLTIPS(x)
#define TYPE_SELF MN_TYPE_TOOLTIPS
#define SELF_CLASS(x) MN_TOOLTIPS_CLASS(x)

#define SELF_GET_CLASS(x) MN_TOOLTIPS_GET_CLASS(x)

/* self typedefs */
typedef MNTooltips Self;
typedef MNTooltipsClass SelfClass;

/* here are local prototypes */
static void mn_tooltips_init (MNTooltips * o) G_GNUC_UNUSED;
static void mn_tooltips_class_init (MNTooltipsClass * c) G_GNUC_UNUSED;
static void ___1_mn_tooltips_finalize (GObject * object) G_GNUC_UNUSED;
static void mn_tooltips_destroy_data (TooltipsData * data) G_GNUC_UNUSED;
static void mn_tooltips_display_closed_h (GdkDisplay * display, gboolean is_error, gpointer user_data) G_GNUC_UNUSED;
static void mn_tooltips_disconnect_display_closed (MNTooltips * self) G_GNUC_UNUSED;
static void mn_tooltips_unset_window (MNTooltips * self) G_GNUC_UNUSED;
static void mn_tooltips_update_screen (MNTooltips * self, gboolean new_window) G_GNUC_UNUSED;
static void mn_tooltips_force_window (MNTooltips * self) G_GNUC_UNUSED;
static TooltipsData * mn_tooltips_get_data (GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_set_tip_widget_real (MNTooltips * self, GtkWidget * widget, GtkWidget * tip_widget, int border_width) G_GNUC_UNUSED;
static gboolean mn_tooltips_paint_window (MNTooltips * self) G_GNUC_UNUSED;
static void mn_tooltips_draw_tips (MNTooltips * self) G_GNUC_UNUSED;
static gboolean mn_tooltips_timeout_cb (gpointer data) G_GNUC_UNUSED;
static void mn_tooltips_set_active_widget (MNTooltips * self, GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_show_tip (GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_hide_tip (GtkWidget * widget) G_GNUC_UNUSED;
static gboolean mn_tooltips_recently_shown (MNTooltips * self) G_GNUC_UNUSED;
static gboolean mn_tooltips_get_keyboard_mode (GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_start_keyboard_mode (GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_stop_keyboard_mode (GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_start_delay (MNTooltips * self, GtkWidget * widget) G_GNUC_UNUSED;
static void mn_tooltips_event_after_h (GtkWidget * widget, GdkEvent * event, gpointer user_data) G_GNUC_UNUSED;
static void mn_tooltips_widget_unmap (GtkWidget * widget, gpointer user_data) G_GNUC_UNUSED;
static void mn_tooltips_widget_remove (GtkWidget * widget, gpointer user_data) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_destroy_data mn_tooltips_destroy_data
#define self_display_closed_h mn_tooltips_display_closed_h
#define self_disconnect_display_closed mn_tooltips_disconnect_display_closed
#define self_unset_window mn_tooltips_unset_window
#define self_update_screen mn_tooltips_update_screen
#define self_force_window mn_tooltips_force_window
#define self_get_data mn_tooltips_get_data
#define self_set_tip_widget_real mn_tooltips_set_tip_widget_real
#define self_set_tip mn_tooltips_set_tip
#define self_set_tip_widget mn_tooltips_set_tip_widget
#define self_paint_window mn_tooltips_paint_window
#define self_draw_tips mn_tooltips_draw_tips
#define self_timeout_cb mn_tooltips_timeout_cb
#define self_set_active_widget mn_tooltips_set_active_widget
#define self_show_tip mn_tooltips_show_tip
#define self_hide_tip mn_tooltips_hide_tip
#define self_recently_shown mn_tooltips_recently_shown
#define self_get_keyboard_mode mn_tooltips_get_keyboard_mode
#define self_start_keyboard_mode mn_tooltips_start_keyboard_mode
#define self_stop_keyboard_mode mn_tooltips_stop_keyboard_mode
#define self_start_delay mn_tooltips_start_delay
#define self_event_after_h mn_tooltips_event_after_h
#define self_widget_unmap mn_tooltips_widget_unmap
#define self_widget_remove mn_tooltips_widget_remove
#define self_toggle_keyboard_mode mn_tooltips_toggle_keyboard_mode
#define self_new mn_tooltips_new
GType
mn_tooltips_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNTooltipsClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_tooltips_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNTooltips),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_tooltips_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "MNTooltips", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNTooltips *)g_object_new(mn_tooltips_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNTooltips * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNTooltips *
GET_NEW_VARG (const char *first, ...)
{
	MNTooltips *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNTooltips *)g_object_new_valist (mn_tooltips_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Tooltips::finalize"
	MNTooltips *self G_GNUC_UNUSED = MN_TOOLTIPS (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
#line 89 "mn-tooltips.gob"
	___1_mn_tooltips_finalize(obj_self);
#line 182 "mn-tooltips.c"
}
#undef __GOB_FUNCTION__

static void 
mn_tooltips_init (MNTooltips * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Tooltips::init"
	o->_priv = G_TYPE_INSTANCE_GET_PRIVATE(o,MN_TYPE_TOOLTIPS,MNTooltipsPrivate);
#line 43 "mn-tooltips.gob"
	o->_priv->border_width = 4;
#line 193 "mn-tooltips.c"
}
#undef __GOB_FUNCTION__
static void 
mn_tooltips_class_init (MNTooltipsClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Tooltips::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	g_type_class_add_private(c,sizeof(MNTooltipsPrivate));

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

#line 89 "mn-tooltips.gob"
	g_object_class->finalize = ___finalize;
#line 208 "mn-tooltips.c"
}
#undef __GOB_FUNCTION__



#line 89 "mn-tooltips.gob"
static void 
___1_mn_tooltips_finalize (GObject * object G_GNUC_UNUSED)
#line 217 "mn-tooltips.c"
#define PARENT_HANDLER(___object) \
	{ if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(___object); }
{
#define __GOB_FUNCTION__ "MN:Tooltips::finalize"
{
#line 91 "mn-tooltips.gob"
	
    Self *self = SELF(object);
    GSList *l;

    if (selfp->timeout_source)
      mn_locked_g_source_remove(selfp->timeout_source);

    MN_LIST_FOREACH(l, selfp->data_list)
      {
	TooltipsData *data = l->data;
	self_widget_remove(data->widget, data);
      }

    self_unset_window(self);

    PARENT_HANDLER(object);
  }}
#line 242 "mn-tooltips.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 109 "mn-tooltips.gob"
static void 
mn_tooltips_destroy_data (TooltipsData * data)
#line 249 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::destroy_data"
{
#line 111 "mn-tooltips.gob"
	
    g_object_disconnect(data->widget,
			"any-signal", self_event_after_h, data,
			"any-signal", self_widget_unmap, data,
			"any-signal", self_widget_remove, data,
			NULL);

    g_object_set_data(G_OBJECT(data->widget), TOOLTIPS_DATA, NULL);
    g_object_unref(data->widget);
    g_object_unref(data->tip_widget);
    g_free(data);
  }}
#line 266 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 124 "mn-tooltips.gob"
static void 
mn_tooltips_display_closed_h (GdkDisplay * display, gboolean is_error, gpointer user_data)
#line 272 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::display_closed_h"
{
#line 128 "mn-tooltips.gob"
	
    Self *self = SELF(user_data);
    self_unset_window(self);
  }}
#line 281 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 133 "mn-tooltips.gob"
static void 
mn_tooltips_disconnect_display_closed (MNTooltips * self)
#line 287 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::disconnect_display_closed"
#line 133 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 133 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 294 "mn-tooltips.c"
{
#line 135 "mn-tooltips.gob"
	
    g_signal_handlers_disconnect_by_func(gtk_widget_get_display(selfp->window),
					 self_display_closed_h,
					 self);
  }}
#line 302 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 141 "mn-tooltips.gob"
static void 
mn_tooltips_unset_window (MNTooltips * self)
#line 308 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::unset_window"
#line 141 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 141 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 315 "mn-tooltips.c"
{
#line 143 "mn-tooltips.gob"
	
    if (selfp->window)
      {
	self_disconnect_display_closed(self);
	gtk_widget_destroy(selfp->window);
      }
  }}
#line 325 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 151 "mn-tooltips.gob"
static void 
mn_tooltips_update_screen (MNTooltips * self, gboolean new_window)
#line 331 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::update_screen"
#line 151 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 151 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 338 "mn-tooltips.c"
{
#line 153 "mn-tooltips.gob"
	
    gboolean screen_changed = FALSE;

    if (selfp->active_data && selfp->active_data->widget)
      {
	GdkScreen *screen = gtk_widget_get_screen(selfp->active_data->widget);

	screen_changed = (screen != gtk_widget_get_screen(selfp->window));

	if (screen_changed)
	  {
	    if (! new_window)
	      self_disconnect_display_closed(self);

	    gtk_window_set_screen(GTK_WINDOW(selfp->window), screen);
	  }
      }

    if (screen_changed || new_window)
      g_signal_connect(gtk_widget_get_display(selfp->window),
		       "closed",
		       G_CALLBACK(self_display_closed_h),
		       self);
  }}
#line 365 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 178 "mn-tooltips.gob"
static void 
mn_tooltips_force_window (MNTooltips * self)
#line 371 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::force_window"
#line 178 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 178 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 378 "mn-tooltips.c"
{
#line 180 "mn-tooltips.gob"
	
    if (! selfp->window)
      {
	selfp->window = gtk_window_new(GTK_WINDOW_POPUP);
	self_update_screen(self, TRUE);
	gtk_widget_set_app_paintable(selfp->window, TRUE);
	gtk_window_set_resizable(GTK_WINDOW(selfp->window), FALSE);
	gtk_widget_set_name(selfp->window, "gtk-tooltips");
	gtk_container_set_border_width(GTK_CONTAINER(selfp->window), selfp->border_width);

	g_signal_connect_swapped(selfp->window,
				 "expose-event",
				 G_CALLBACK(self_paint_window),
				 self);

	eel_add_weak_pointer(&selfp->window);
      }
  }}
#line 399 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 199 "mn-tooltips.gob"
static TooltipsData * 
mn_tooltips_get_data (GtkWidget * widget)
#line 405 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::get_data"
#line 199 "mn-tooltips.gob"
	g_return_val_if_fail (widget != NULL, (TooltipsData * )0);
#line 199 "mn-tooltips.gob"
	g_return_val_if_fail (GTK_IS_WIDGET (widget), (TooltipsData * )0);
#line 412 "mn-tooltips.c"
{
#line 201 "mn-tooltips.gob"
	
    return g_object_get_data(G_OBJECT(widget), TOOLTIPS_DATA);
  }}
#line 418 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 205 "mn-tooltips.gob"
static void 
mn_tooltips_set_tip_widget_real (MNTooltips * self, GtkWidget * widget, GtkWidget * tip_widget, int border_width)
#line 424 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::set_tip_widget_real"
#line 205 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 205 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 205 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 205 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 435 "mn-tooltips.c"
{
#line 210 "mn-tooltips.gob"
	
    TooltipsData *data;

    data = self_get_data(widget);

    if (! tip_widget)
      {
	if (data)
	  self_widget_remove(data->widget, data);
	return;
      }

    if (selfp->active_data
	&& selfp->active_data->widget == widget
	&& GTK_WIDGET_DRAWABLE(selfp->active_data->widget))
      {
	if (data->tip_widget)
	  g_object_unref(data->tip_widget);

	data->tip_widget = tip_widget;

	if (data->tip_widget)
	  mn_gtk_object_ref_and_sink(GTK_OBJECT(data->tip_widget));

	self_draw_tips(self);
      }
    else
      {
	g_object_ref(widget);

	if (data)
	  self_widget_remove(data->widget, data);

	data = g_new0(TooltipsData, 1);
	data->self = self;
	data->widget = widget;
	data->tip_widget = tip_widget;

	if (data->tip_widget)
	  mn_gtk_object_ref_and_sink(GTK_OBJECT(data->tip_widget));

	selfp->data_list = g_slist_append(selfp->data_list, data);
	g_signal_connect_after(widget, "event-after", G_CALLBACK(self_event_after_h), data);

	g_object_set_data(G_OBJECT(widget), TOOLTIPS_DATA, data);

	g_object_connect(widget,
			 "signal::unmap", self_widget_unmap, data,
			 "signal::unrealize", self_widget_unmap, data,
			 "signal::destroy", self_widget_remove, data,
			 NULL);
      }

    selfp->border_width = border_width;
    if (selfp->window)
      gtk_container_set_border_width(GTK_CONTAINER(selfp->window), border_width);
  }}
#line 495 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 268 "mn-tooltips.gob"
void 
mn_tooltips_set_tip (MNTooltips * self, GtkWidget * widget, const char * tip_text)
#line 501 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::set_tip"
#line 268 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 268 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 268 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 268 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 512 "mn-tooltips.c"
{
#line 272 "mn-tooltips.gob"
	
    GtkWidget *label = NULL;

    if (tip_text)
      {
	label = gtk_label_new(tip_text);
	gtk_label_set_line_wrap(GTK_LABEL(label), TRUE);
	gtk_misc_set_alignment(GTK_MISC(label), 0.5, 0.5);
	gtk_widget_show(label);
      }

    self_set_tip_widget_real(self, widget, label, 4);
  }}
#line 528 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 286 "mn-tooltips.gob"
void 
mn_tooltips_set_tip_widget (MNTooltips * self, GtkWidget * widget, GtkWidget * tip_widget)
#line 534 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::set_tip_widget"
#line 286 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 286 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 286 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 286 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 545 "mn-tooltips.c"
{
#line 290 "mn-tooltips.gob"
	
    self_set_tip_widget_real(self, widget, tip_widget, 12);
  }}
#line 551 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 294 "mn-tooltips.gob"
static gboolean 
mn_tooltips_paint_window (MNTooltips * self)
#line 557 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::paint_window"
#line 294 "mn-tooltips.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 294 "mn-tooltips.gob"
	g_return_val_if_fail (MN_IS_TOOLTIPS (self), (gboolean )0);
#line 564 "mn-tooltips.c"
{
#line 296 "mn-tooltips.gob"
	
    GtkRequisition req;

    gtk_widget_size_request(selfp->window, &req);
    gtk_paint_flat_box(selfp->window->style,
		       selfp->window->window,
		       GTK_STATE_NORMAL,
		       GTK_SHADOW_OUT,
		       NULL,
		       selfp->window,
		       "tooltip",
		       0,
		       0,
		       req.width,
		       req.height);

    return FALSE;
  }}
#line 585 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 315 "mn-tooltips.gob"
static void 
mn_tooltips_draw_tips (MNTooltips * self)
#line 591 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::draw_tips"
#line 315 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 315 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 598 "mn-tooltips.c"
{
#line 317 "mn-tooltips.gob"
	
    GtkRequisition requisition;
    GtkWidget *widget;
    gint x, y, w, h;
    TooltipsData *data;
    GtkWidget *child;
    gboolean keyboard_mode;
    GdkScreen *screen;
    GdkScreen *pointer_screen;
    gint monitor_num, px, py;
    GdkRectangle monitor;
    int screen_width;

    if (! selfp->window)
      self_force_window(self);
    else if (GTK_WIDGET_VISIBLE(selfp->window))
      g_get_current_time(&selfp->last_popdown);

    gtk_widget_ensure_style(selfp->window);

    widget = selfp->active_data->widget;
    g_object_set_data(G_OBJECT(selfp->window), TOOLTIPS_INFO, self);

    keyboard_mode = self_get_keyboard_mode(widget);

    self_update_screen(self, FALSE);

    screen = gtk_widget_get_screen(widget);

    data = selfp->active_data;

    child = GTK_BIN(selfp->window)->child;
    if (child)
      gtk_container_remove(GTK_CONTAINER(selfp->window), child);

    if (data->tip_widget)
      {
	gtk_container_add(GTK_CONTAINER(selfp->window), data->tip_widget);
	gtk_widget_show(data->tip_widget);
      }

    gtk_widget_size_request(selfp->window, &requisition);
    w = requisition.width;
    h = requisition.height;

    gdk_window_get_origin(widget->window, &x, &y);
    if (GTK_WIDGET_NO_WINDOW(widget))
      {
	x += widget->allocation.x;
	y += widget->allocation.y;
      }

    x += widget->allocation.width / 2;

    if (! keyboard_mode)
      gdk_window_get_pointer(gdk_screen_get_root_window(screen), &x, NULL, NULL);

    x -= (w / 2 + 4);

    gdk_display_get_pointer(gdk_screen_get_display(screen), &pointer_screen, &px, &py, NULL);
    if (pointer_screen != screen)
      {
	px = x;
	py = y;
      }
    monitor_num = gdk_screen_get_monitor_at_point(screen, px, py);
    gdk_screen_get_monitor_geometry(screen, monitor_num, &monitor);

    if ((x + w) > monitor.x + monitor.width)
      x -= (x + w) - (monitor.x + monitor.width);
    else if (x < monitor.x)
      x = monitor.x;

    if ((y + h + widget->allocation.height + 4) > monitor.y + monitor.height
	&& (y - 4) > monitor.y)
      y = y - h - 4;
    else
      y = y + widget->allocation.height + 4;

    /*
     * The following block is not part of GTK+ and has been added to
     * make sure that the tooltip will not go beyond the screen edges
     * (horizontally).
     */
    screen_width = gdk_screen_get_width(screen);
    if (x < 0 || x + w > screen_width)
      {
	x = 0;
	gtk_widget_set_size_request(selfp->window, MIN(w, screen_width), -1);
      }

    /*
     * The following block ensures that the top of the tooltip is
     * visible, but it corrupts the tip widget (the mail summary is
     * not properly positioned). A fix is welcome.
     */
/*
    if (y < 0)
      {
	gtk_widget_set_size_request(selfp->window, -1, y + h);
	y = 0;
      }
*/

    gtk_window_move(GTK_WINDOW(selfp->window), x, y);
    gtk_widget_show(selfp->window);
  }}
#line 708 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 425 "mn-tooltips.gob"
static gboolean 
mn_tooltips_timeout_cb (gpointer data)
#line 714 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::timeout_cb"
{
#line 427 "mn-tooltips.gob"
	
    Self *self = SELF(data);

    if (selfp->active_data != NULL && GTK_WIDGET_DRAWABLE(selfp->active_data->widget))
      self_draw_tips(self);

    selfp->timeout_source = NULL;
    return FALSE;		/* remove timeout */
  }}
#line 728 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 437 "mn-tooltips.gob"
static void 
mn_tooltips_set_active_widget (MNTooltips * self, GtkWidget * widget)
#line 734 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::set_active_widget"
#line 437 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 437 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 741 "mn-tooltips.c"
{
#line 439 "mn-tooltips.gob"
	
    if (selfp->window)
      {
	if (GTK_WIDGET_VISIBLE(selfp->window))
	  g_get_current_time(&selfp->last_popdown);
	gtk_widget_hide(selfp->window);
      }

    mn_locked_g_source_clear(&selfp->timeout_source);

    selfp->active_data = NULL;

    if (widget)
      {
	GSList *l;

	MN_LIST_FOREACH(l, selfp->data_list)
	{
	  TooltipsData *data = l->data;

	  if (data->widget == widget && GTK_WIDGET_DRAWABLE(widget))
	    {
	      selfp->active_data = data;
	      break;
	    }
	}
      }
    else
      selfp->use_sticky_delay = FALSE;
  }}
#line 774 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 470 "mn-tooltips.gob"
static void 
mn_tooltips_show_tip (GtkWidget * widget)
#line 780 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::show_tip"
#line 470 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 470 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 787 "mn-tooltips.c"
{
#line 472 "mn-tooltips.gob"
	
    TooltipsData *data;

    data = self_get_data(widget);

    if (data &&
	(! data->self->_priv->active_data ||
	 data->self->_priv->active_data->widget != widget))
      {
	self_set_active_widget(data->self, widget);
	self_draw_tips(data->self);
      }
  }}
#line 803 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 486 "mn-tooltips.gob"
static void 
mn_tooltips_hide_tip (GtkWidget * widget)
#line 809 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::hide_tip"
#line 486 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 486 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 816 "mn-tooltips.c"
{
#line 488 "mn-tooltips.gob"
	
    TooltipsData *data;

    data = self_get_data(widget);

    if (data &&
	(data->self->_priv->active_data &&
	 data->self->_priv->active_data->widget == widget))
      self_set_active_widget(data->self, NULL);
  }}
#line 829 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 499 "mn-tooltips.gob"
static gboolean 
mn_tooltips_recently_shown (MNTooltips * self)
#line 835 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::recently_shown"
#line 499 "mn-tooltips.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 499 "mn-tooltips.gob"
	g_return_val_if_fail (MN_IS_TOOLTIPS (self), (gboolean )0);
#line 842 "mn-tooltips.c"
{
#line 501 "mn-tooltips.gob"
	
    GTimeVal now;
    glong msec;

    g_get_current_time (&now);
    msec = (now.tv_sec - selfp->last_popdown.tv_sec) * 1000 +
      (now.tv_usec - selfp->last_popdown.tv_usec) / 1000;
    return (msec < STICKY_REVERT_DELAY);
  }}
#line 854 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 511 "mn-tooltips.gob"
static gboolean 
mn_tooltips_get_keyboard_mode (GtkWidget * widget)
#line 860 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::get_keyboard_mode"
#line 511 "mn-tooltips.gob"
	g_return_val_if_fail (widget != NULL, (gboolean )0);
#line 511 "mn-tooltips.gob"
	g_return_val_if_fail (GTK_IS_WIDGET (widget), (gboolean )0);
#line 867 "mn-tooltips.c"
{
#line 513 "mn-tooltips.gob"
	
    GtkWidget *toplevel = gtk_widget_get_toplevel(widget);

    if (GTK_IS_WINDOW(toplevel))
      return GPOINTER_TO_INT(g_object_get_data(G_OBJECT(toplevel), TOOLTIPS_KEYBOARD_MODE));
    else
      return FALSE;
  }}
#line 878 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 522 "mn-tooltips.gob"
static void 
mn_tooltips_start_keyboard_mode (GtkWidget * widget)
#line 884 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::start_keyboard_mode"
#line 522 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 522 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 891 "mn-tooltips.c"
{
#line 524 "mn-tooltips.gob"
	
    GtkWidget *toplevel = gtk_widget_get_toplevel(widget);

    if (GTK_IS_WINDOW(toplevel))
      {
	GtkWidget *focus = GTK_WINDOW(toplevel)->focus_widget;

	g_object_set_data(G_OBJECT(toplevel), TOOLTIPS_KEYBOARD_MODE, GINT_TO_POINTER(TRUE));

	if (focus)
	  self_show_tip(focus);
      }
  }}
#line 907 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 538 "mn-tooltips.gob"
static void 
mn_tooltips_stop_keyboard_mode (GtkWidget * widget)
#line 913 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::stop_keyboard_mode"
#line 538 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 538 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 920 "mn-tooltips.c"
{
#line 540 "mn-tooltips.gob"
	
    GtkWidget *toplevel = gtk_widget_get_toplevel(widget);

    if (GTK_IS_WINDOW(toplevel))
      {
	GtkWidget *focus = GTK_WINDOW(toplevel)->focus_widget;

	if (focus)
	  self_hide_tip(focus);

	g_object_set_data(G_OBJECT(toplevel), TOOLTIPS_KEYBOARD_MODE, GINT_TO_POINTER(FALSE));
      }
  }}
#line 936 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 554 "mn-tooltips.gob"
static void 
mn_tooltips_start_delay (MNTooltips * self, GtkWidget * widget)
#line 942 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::start_delay"
#line 554 "mn-tooltips.gob"
	g_return_if_fail (self != NULL);
#line 554 "mn-tooltips.gob"
	g_return_if_fail (MN_IS_TOOLTIPS (self));
#line 949 "mn-tooltips.c"
{
#line 556 "mn-tooltips.gob"
	
    TooltipsData *old_data;

    old_data = selfp->active_data;
    if (! old_data || old_data->widget != widget)
      {
	self_set_active_widget(self, widget);
	selfp->timeout_source = mn_g_timeout_add_gdk_locked((selfp->use_sticky_delay && self_recently_shown(self)) ? STICKY_DELAY : DELAY,
							    self_timeout_cb,
							    self);
      }
  }}
#line 964 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 569 "mn-tooltips.gob"
static void 
mn_tooltips_event_after_h (GtkWidget * widget, GdkEvent * event, gpointer user_data)
#line 970 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::event_after_h"
{
#line 571 "mn-tooltips.gob"
	
    Self *self;
    TooltipsData *old_data;
    GtkWidget *event_widget;
    gboolean keyboard_mode = self_get_keyboard_mode(widget);

    if ((event->type == GDK_LEAVE_NOTIFY || event->type == GDK_ENTER_NOTIFY) &&
	event->crossing.detail == GDK_NOTIFY_INFERIOR)
      return;

    old_data = self_get_data(widget);
    self = old_data->self;

    if (keyboard_mode)
      {
	switch (event->type)
	  {
	  case GDK_FOCUS_CHANGE:
	    if (event->focus_change.in)
	      self_show_tip(widget);
	    else
	      self_hide_tip(widget);
	    break;

	  default:
	    break;
	  }
      }
    else
      {
	if (event->type != GDK_KEY_PRESS && event->type != GDK_KEY_RELEASE)
	  {
	    event_widget = gtk_get_event_widget(event);
	    if (event_widget != widget)
	      return;
	  }

	switch (event->type)
	  {
	  case GDK_EXPOSE:
	    /* do nothing */
	    break;

	  case GDK_ENTER_NOTIFY:
	    if (! (GTK_IS_MENU_ITEM(widget) && GTK_MENU_ITEM(widget)->submenu))
	      self_start_delay(self, widget);
	    break;

	  case GDK_LEAVE_NOTIFY:
	    self_set_active_widget(self, NULL);
	    selfp->use_sticky_delay = selfp->window && GTK_WIDGET_VISIBLE(selfp->window);
	    break;

	  case GDK_MOTION_NOTIFY:
	    /* Handle menu items specially ... pend popup for each motion
	     * on other widgets, we ignore motion.
	     */
	    if (GTK_IS_MENU_ITEM(widget) && ! GTK_MENU_ITEM(widget)->submenu)
	      {
		/* Completely evil hack to make sure we get the LEAVE_NOTIFY
		 */
		GTK_PRIVATE_SET_FLAG(widget, GTK_LEAVE_PENDING);
		self_set_active_widget(self, NULL);
		self_start_delay(self, widget);
		break;
	      }
	    break;		/* ignore */

	  case GDK_BUTTON_PRESS:
	  case GDK_BUTTON_RELEASE:
	  case GDK_KEY_PRESS:
	  case GDK_KEY_RELEASE:
	  case GDK_PROXIMITY_IN:
	  case GDK_SCROLL:
	    self_set_active_widget(self, NULL);
	    break;

	  default:
	    break;
	  }
      }
  }}
#line 1057 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 654 "mn-tooltips.gob"
static void 
mn_tooltips_widget_unmap (GtkWidget * widget, gpointer user_data)
#line 1063 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::widget_unmap"
#line 654 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 654 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 1070 "mn-tooltips.c"
{
#line 656 "mn-tooltips.gob"
	
    TooltipsData *data = user_data;
    Self *self = data->self;

    if (selfp->active_data &&
	(selfp->active_data->widget == widget))
      self_set_active_widget(self, NULL);
  }}
#line 1081 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 665 "mn-tooltips.gob"
static void 
mn_tooltips_widget_remove (GtkWidget * widget, gpointer user_data)
#line 1087 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::widget_remove"
#line 665 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 665 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 1094 "mn-tooltips.c"
{
#line 667 "mn-tooltips.gob"
	
    TooltipsData *data = user_data;
    Self *self = data->self;

    self_widget_unmap(widget, user_data);
    selfp->data_list = g_slist_remove(selfp->data_list, data);
    self_destroy_data(data);
  }}
#line 1105 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 676 "mn-tooltips.gob"
void 
mn_tooltips_toggle_keyboard_mode (GtkWidget * widget)
#line 1111 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::toggle_keyboard_mode"
#line 676 "mn-tooltips.gob"
	g_return_if_fail (widget != NULL);
#line 676 "mn-tooltips.gob"
	g_return_if_fail (GTK_IS_WIDGET (widget));
#line 1118 "mn-tooltips.c"
{
#line 678 "mn-tooltips.gob"
	
    if (self_get_keyboard_mode(widget))
      self_stop_keyboard_mode(widget);
    else
      self_start_keyboard_mode(widget);
  }}
#line 1127 "mn-tooltips.c"
#undef __GOB_FUNCTION__

#line 685 "mn-tooltips.gob"
MNTooltips * 
mn_tooltips_new (void)
#line 1133 "mn-tooltips.c"
{
#define __GOB_FUNCTION__ "MN:Tooltips::new"
{
#line 687 "mn-tooltips.gob"
	
    return GET_NEW;
  }}
#line 1141 "mn-tooltips.c"
#undef __GOB_FUNCTION__
