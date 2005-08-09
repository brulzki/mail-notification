/* Generated by GOB (v2.0.12) on Tue Aug  9 22:01:56 2005
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 12

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-pi-mailbox-properties.h"

#include "mn-pi-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 27 "mn-pi-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include "mn-mailbox-properties-private.h"
#include "mn-authenticated-mailbox-properties-private.h"
#include "mn-auth-combo-box.h"
#include "mn-util.h"
#include "mn-stock.h"

#line 37 "mn-pi-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_PI_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_PI_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_PI_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_PI_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_PI_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_PI_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNPIMailboxProperties Self;
typedef MNPIMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void mn_pi_mailbox_properties_class_init (MNPIMailboxPropertiesClass * class) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_init (MNPIMailboxProperties * self) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_add_connection_type (MNPIMailboxProperties * self, MNPIMailboxConnectionType type, const char * mnemonic) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_add_authentication (MNPIMailboxProperties * self) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_notify_expanded_h (GObject * object, GParamSpec * pspec, gpointer user_data) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_radio_toggled_h (GtkToggleButton * togglebutton, gpointer user_data) G_GNUC_UNUSED;
static void ___7_mn_pi_mailbox_properties_set_mailbox (MNMailboxProperties * properties, MNMailbox * mailbox) G_GNUC_UNUSED;
static MNMailbox * ___8_mn_pi_mailbox_properties_get_mailbox (MNMailboxProperties * properties) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static MNAuthenticatedMailboxPropertiesClass *parent_class = NULL;

/* Short form macros */
#define self_add_connection_type mn_pi_mailbox_properties_add_connection_type
#define self_add_authentication mn_pi_mailbox_properties_add_authentication
#define self_notify_expanded_h mn_pi_mailbox_properties_notify_expanded_h
#define self_radio_toggled_h mn_pi_mailbox_properties_radio_toggled_h
#define self_get_contents mn_pi_mailbox_properties_get_contents
GType
mn_pi_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNPIMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_pi_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNPIMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_pi_mailbox_properties_init,
			NULL
		};

		type = g_type_register_static (MN_TYPE_AUTHENTICATED_MAILBOX_PROPERTIES, "MNPIMailboxProperties", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNPIMailboxProperties *)g_object_new(mn_pi_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNPIMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNPIMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNPIMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNPIMailboxProperties *)g_object_new_valist (mn_pi_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}

#line 46 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_class_init (MNPIMailboxPropertiesClass * class G_GNUC_UNUSED)
#line 115 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::class_init"
	MNMailboxPropertiesClass *mn_mailbox_properties_class = (MNMailboxPropertiesClass *)class;

	parent_class = g_type_class_ref (MN_TYPE_AUTHENTICATED_MAILBOX_PROPERTIES);

#line 216 "mn-pi-mailbox-properties.gob"
	mn_mailbox_properties_class->set_mailbox = ___7_mn_pi_mailbox_properties_set_mailbox;
#line 231 "mn-pi-mailbox-properties.gob"
	mn_mailbox_properties_class->get_mailbox = ___8_mn_pi_mailbox_properties_get_mailbox;
#line 126 "mn-pi-mailbox-properties.c"
 {
#line 47 "mn-pi-mailbox-properties.gob"

    MNMailboxPropertiesClass *p_class = MN_MAILBOX_PROPERTIES_CLASS(class);

    p_class->stock_id = MN_STOCK_REMOTE;
  
#line 134 "mn-pi-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__
#line 53 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_init (MNPIMailboxProperties * self G_GNUC_UNUSED)
#line 141 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::init"
 {
#line 54 "mn-pi-mailbox-properties.gob"

    MNMailboxProperties *properties = MN_MAILBOX_PROPERTIES(self);
    MNAuthenticatedMailboxProperties *auth = MN_AUTHENTICATED_MAILBOX_PROPERTIES(self);
    GtkWidget *hbox;
    GtkWidget *label;
    GtkWidget *expander;
    GtkSizeGroup *radio_size_group;
    int i;
    const struct
    {
      MNPIMailboxConnectionType	type;
      const char		*mnemonic;
    } connection_types[] = {
      { MN_PI_MAILBOX_CONNECTION_TYPE_NORMAL,		N_("sta_ndard")			},
      { MN_PI_MAILBOX_CONNECTION_TYPE_INBAND_SSL,	N_("_in-band SSL/TLS")		},
      { MN_PI_MAILBOX_CONNECTION_TYPE_SSL,		N_("SSL/TLS on sepa_rate port")	}
    };
      
    hbox = mn_authenticated_mailbox_properties_field_new(auth,
							 _("_Hostname:"),
							 &label,
							 &self->hostname_entry);

    gtk_box_pack_start(GTK_BOX(self), hbox, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(self), auth->username_vbox, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(self), auth->password_vbox, FALSE, FALSE, 0);

    self->details_size_group = gtk_size_group_new(GTK_SIZE_GROUP_NONE);

    gtk_size_group_add_widget(self->details_size_group, auth->username_label);
    gtk_size_group_add_widget(self->details_size_group, auth->password_label);
    gtk_size_group_add_widget(self->details_size_group, label);

    mn_mailbox_properties_add_entries(properties,
				      GTK_ENTRY(self->hostname_entry),
				      GTK_ENTRY(auth->username_entry),
				      GTK_ENTRY(auth->password_entry),
				      NULL);

    expander = gtk_expander_new_with_mnemonic(_("_Details"));
    gtk_expander_set_spacing(GTK_EXPANDER(expander), 6);

    self->details_vbox = gtk_vbox_new(FALSE, 6);
    gtk_container_add(GTK_CONTAINER(expander), self->details_vbox);
    
    gtk_box_pack_start(GTK_BOX(self), expander, FALSE, FALSE, 0);
    gtk_widget_show_all(expander);
    
    radio_size_group = gtk_size_group_new(GTK_SIZE_GROUP_HORIZONTAL);

    for (i = 0; i < MN_PI_MAILBOX_N_CONNECTION_TYPES; i++)
      {
	self_add_connection_type(self,
				 connection_types[i].type,
				 _(connection_types[i].mnemonic));

	gtk_size_group_add_widget(radio_size_group, self->conn_radio[i]);

	mn_mailbox_properties_add_entry(properties, GTK_ENTRY(self->port_spin[i]));
	g_signal_connect(self->conn_radio[i], "toggled", G_CALLBACK(self_radio_toggled_h), self);
      }
    
    g_object_unref(radio_size_group);

#ifndef WITH_SSL
    gtk_widget_set_sensitive(self->conn_radio[MN_PI_MAILBOX_CONNECTION_TYPE_INBAND_SSL], FALSE);
    gtk_widget_set_sensitive(self->conn_radio[MN_PI_MAILBOX_CONNECTION_TYPE_SSL], FALSE);
#endif

    /* by default, standard is enabled */
    gtk_widget_set_sensitive(self->port_spin[MN_PI_MAILBOX_CONNECTION_TYPE_INBAND_SSL], FALSE);
    gtk_widget_set_sensitive(self->port_spin[MN_PI_MAILBOX_CONNECTION_TYPE_SSL], FALSE);

    self_add_authentication(self);

    g_object_connect(self->hostname_entry,
		     "swapped-signal::changed", mn_mailbox_properties_notify_complete, self,
		     "swapped-signal::changed", mn_mailbox_properties_notify_default_name, self,
		     NULL);

    g_signal_connect_swapped(auth->username_entry, "changed", G_CALLBACK(mn_mailbox_properties_notify_default_name), self);

    g_signal_connect(expander, "notify::expanded", G_CALLBACK(self_notify_expanded_h), self);
  
#line 230 "mn-pi-mailbox-properties.c"
 }
}
#undef __GOB_FUNCTION__



#line 139 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_add_connection_type (MNPIMailboxProperties * self, MNPIMailboxConnectionType type, const char * mnemonic)
#line 240 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::add_connection_type"
#line 139 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 139 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_PI_MAILBOX_PROPERTIES (self));
#line 139 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (mnemonic != NULL);
#line 249 "mn-pi-mailbox-properties.c"
{
#line 143 "mn-pi-mailbox-properties.gob"
	
    GtkWidget *label;
    GtkWidget *hbox;
    GtkWidget *port_label;

    label = gtk_label_new(type == 0 ? _("Connection type:") : NULL);
    gtk_misc_set_alignment(GTK_MISC(label), 0.0, 0.5);

    self->conn_radio[type] = type == 0
      ? gtk_radio_button_new_with_mnemonic(NULL, mnemonic)
      : gtk_radio_button_new_with_mnemonic_from_widget(GTK_RADIO_BUTTON(self->conn_radio[0]), mnemonic);

    port_label = gtk_label_new(_("Port:"));

    self->port_spin[type] = gtk_spin_button_new_with_range(0, 0xFFFF, 1);
    gtk_spin_button_set_numeric(GTK_SPIN_BUTTON(self->port_spin[type]), TRUE);

    hbox = gtk_hbox_new(FALSE, 12);
    gtk_box_pack_start(GTK_BOX(hbox), label, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), self->conn_radio[type], TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), port_label, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), self->port_spin[type], FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(self->details_vbox), hbox, FALSE, FALSE, 0);
    gtk_widget_show_all(hbox);

    gtk_size_group_add_widget(self->details_size_group, label);
  }}
#line 279 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 171 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_add_authentication (MNPIMailboxProperties * self)
#line 285 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::add_authentication"
#line 171 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 171 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_PI_MAILBOX_PROPERTIES (self));
#line 292 "mn-pi-mailbox-properties.c"
{
#line 173 "mn-pi-mailbox-properties.gob"
	
    GtkWidget *hbox;
    GtkWidget *label;

    hbox = gtk_hbox_new(FALSE, 12);
    label = gtk_label_new_with_mnemonic(_("_Authentication mechanism:"));
    gtk_misc_set_alignment(GTK_MISC(label), 0.0, 0.5);

    self->auth_combo = mn_auth_combo_box_new();
    gtk_label_set_mnemonic_widget(GTK_LABEL(label), self->auth_combo);

    gtk_box_pack_start(GTK_BOX(hbox), label, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(hbox), self->auth_combo, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(self->details_vbox), hbox, FALSE, FALSE, 0);
    gtk_widget_show_all(hbox);

    gtk_size_group_add_widget(self->details_size_group, label);
  }}
#line 313 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 192 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_notify_expanded_h (GObject * object, GParamSpec * pspec, gpointer user_data)
#line 319 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::notify_expanded_h"
{
#line 194 "mn-pi-mailbox-properties.gob"
	
    Self *self = user_data;

    gtk_size_group_set_mode(self->details_size_group,
			    gtk_expander_get_expanded(GTK_EXPANDER(object))
			    ? GTK_SIZE_GROUP_HORIZONTAL
			    : GTK_SIZE_GROUP_NONE);
  }}
#line 332 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 203 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_radio_toggled_h (GtkToggleButton * togglebutton, gpointer user_data)
#line 338 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::radio_toggled_h"
#line 203 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (togglebutton != NULL);
#line 203 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (GTK_IS_TOGGLE_BUTTON (togglebutton));
#line 203 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (user_data != NULL);
#line 347 "mn-pi-mailbox-properties.c"
{
#line 206 "mn-pi-mailbox-properties.gob"
	
    Self *self = user_data;
    int i;

    for (i = 0; i < MN_PI_MAILBOX_N_CONNECTION_TYPES; i++)
      gtk_widget_set_sensitive(self->port_spin[i], GTK_WIDGET_SENSITIVE(self->conn_radio[i]) && gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(self->conn_radio[i])));

    g_object_notify(G_OBJECT(self), "complete");
  }}
#line 359 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 216 "mn-pi-mailbox-properties.gob"
static void 
___7_mn_pi_mailbox_properties_set_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED, MNMailbox * mailbox)
#line 365 "mn-pi-mailbox-properties.c"
#define PARENT_HANDLER(___properties,___mailbox) \
	{ if(MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox) \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->set_mailbox)(___properties,___mailbox); }
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::set_mailbox"
#line 216 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (properties != NULL);
#line 216 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_MAILBOX_PROPERTIES (properties));
#line 216 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (mailbox != NULL);
#line 216 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_MAILBOX (mailbox));
#line 379 "mn-pi-mailbox-properties.c"
{
#line 219 "mn-pi-mailbox-properties.gob"
	
    Self *self = SELF(properties);
    MNPIMailbox *pi_mailbox = MN_PI_MAILBOX(mailbox);

    PARENT_HANDLER(properties, mailbox);

    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(self->conn_radio[pi_mailbox->connection_type]), TRUE);
    mn_auth_combo_box_set_active_mechanism(MN_AUTH_COMBO_BOX(self->auth_combo), pi_mailbox->authmech);
    gtk_entry_set_text(GTK_ENTRY(self->hostname_entry), pi_mailbox->hostname);
    gtk_spin_button_set_value(GTK_SPIN_BUTTON(self->port_spin[pi_mailbox->connection_type]), pi_mailbox->runtime_port);
  }}
#line 393 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 231 "mn-pi-mailbox-properties.gob"
static MNMailbox * 
___8_mn_pi_mailbox_properties_get_mailbox (MNMailboxProperties * properties G_GNUC_UNUSED)
#line 400 "mn-pi-mailbox-properties.c"
#define PARENT_HANDLER(___properties) \
	((MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)? \
		(* MN_MAILBOX_PROPERTIES_CLASS(parent_class)->get_mailbox)(___properties): \
		((MNMailbox * )0))
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::get_mailbox"
{
#line 233 "mn-pi-mailbox-properties.gob"
	
    MNMailbox *mailbox;
    MNPIMailboxConnectionType connection_type;
    char *authmech;
    const char *hostname;
    int port;

    mailbox = PARENT_HANDLER(properties);

    self_get_contents(SELF(properties),
		      &connection_type,
		      &authmech,
		      &hostname,
		      &port);

    g_object_set(mailbox,
		 "connection-type", connection_type,
		 "authmech", authmech,
		 "hostname", hostname,
		 "port", port,
		 NULL);

    g_free(authmech);

    return mailbox;
  }}
#line 435 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 260 "mn-pi-mailbox-properties.gob"
void 
mn_pi_mailbox_properties_get_contents (MNPIMailboxProperties * self, MNPIMailboxConnectionType * connection_type, char ** authmech, const char ** hostname, int * port)
#line 442 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::get_contents"
#line 260 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 260 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_PI_MAILBOX_PROPERTIES (self));
#line 449 "mn-pi-mailbox-properties.c"
{
#line 266 "mn-pi-mailbox-properties.gob"
	
    MNPIMailboxConnectionType _connection_type;

    if (connection_type || port)
      {
	int i;
	
	_connection_type = -1;

	for (i = 0; i < MN_PI_MAILBOX_N_CONNECTION_TYPES; i++)
	  if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(self->conn_radio[i])))
	    {
	      _connection_type = i;
	      break;
	    }

	g_return_if_fail(_connection_type != -1);
      }
    
    if (connection_type)
      *connection_type = _connection_type;
    if (authmech)
      *authmech = mn_auth_combo_box_get_active_mechanism(MN_AUTH_COMBO_BOX(self->auth_combo));
    if (hostname)
      *hostname = gtk_entry_get_text(GTK_ENTRY(self->hostname_entry));
    if (port)
      *port = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(self->port_spin[_connection_type]));
  }}
#line 480 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__
