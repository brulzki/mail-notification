/* Generated by GOB (v2.0.14)   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 14

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-corba-object.h"

#include "mn-corba-object-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 29 "mn-corba-object.gob"

#include <gtk/gtk.h>

#line 30 "mn-corba-object.c"
/* self casting macros */
#define SELF(x) MN_CORBA_OBJECT(x)
#define SELF_CONST(x) MN_CORBA_OBJECT_CONST(x)
#define IS_SELF(x) MN_IS_CORBA_OBJECT(x)
#define TYPE_SELF MN_TYPE_CORBA_OBJECT
#define SELF_CLASS(x) MN_CORBA_OBJECT_CLASS(x)

#define SELF_GET_CLASS(x) MN_CORBA_OBJECT_GET_CLASS(x)

/* self typedefs */
typedef MNCORBAObject Self;
typedef MNCORBAObjectClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void mn_corba_object_init (MNCORBAObject * o) G_GNUC_UNUSED;
static void mn_corba_object_class_init (MNCORBAObjectClass * c) G_GNUC_UNUSED;
static GObject * ___3_mn_corba_object_constructor (GType type, unsigned int n_construct_properties, GObjectConstructParam * construct_params) G_GNUC_UNUSED;
static void ___4_mn_corba_object_finalize (GObject * object) G_GNUC_UNUSED;
static gboolean mn_corba_object_monitor_cb (gpointer data) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_OBJECT,
	PROP_IID
};

/* pointer to the class of our parent */
static GObjectClass *parent_class = NULL;

/* Short form macros */
#define self_get_object mn_corba_object_get_object
#define self_set_object mn_corba_object_set_object
#define self_monitor_cb mn_corba_object_monitor_cb
#define self_new mn_corba_object_new
GType
mn_corba_object_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNCORBAObjectClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_corba_object_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNCORBAObject),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_corba_object_init,
			NULL
		};

		type = g_type_register_static (G_TYPE_OBJECT, "MNCORBAObject", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNCORBAObject *)g_object_new(mn_corba_object_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNCORBAObject * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNCORBAObject *
GET_NEW_VARG (const char *first, ...)
{
	MNCORBAObject *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNCORBAObject *)g_object_new_valist (mn_corba_object_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::finalize"
	MNCORBAObject *self G_GNUC_UNUSED = MN_CORBA_OBJECT (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
#line 83 "mn-corba-object.gob"
	___4_mn_corba_object_finalize(obj_self);
#line 118 "mn-corba-object.c"
#define object (self->_priv->object)
#define VAR object
	{
#line 36 "mn-corba-object.gob"
	 if (VAR != CORBA_OBJECT_NIL) CORBA_Object_release(VAR, NULL); }
#line 124 "mn-corba-object.c"
	memset(&object, 0, sizeof(object));
#undef VAR
#undef object
#line 56 "mn-corba-object.gob"
	if(self->_priv->iid) { g_free ((gpointer) self->_priv->iid); self->_priv->iid = NULL; }
#line 130 "mn-corba-object.c"
}
#undef __GOB_FUNCTION__

static void 
mn_corba_object_init (MNCORBAObject * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::init"
	o->_priv = G_TYPE_INSTANCE_GET_PRIVATE(o,MN_TYPE_CORBA_OBJECT,MNCORBAObjectPrivate);
#line 29 "mn-corba-object.gob"
	o->_priv->object = CORBA_OBJECT_NIL;
#line 141 "mn-corba-object.c"
}
#undef __GOB_FUNCTION__
static void 
mn_corba_object_class_init (MNCORBAObjectClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	g_type_class_add_private(c,sizeof(MNCORBAObjectPrivate));

	parent_class = g_type_class_ref (G_TYPE_OBJECT);

#line 61 "mn-corba-object.gob"
	g_object_class->constructor = ___3_mn_corba_object_constructor;
#line 83 "mn-corba-object.gob"
	g_object_class->finalize = ___finalize;
#line 158 "mn-corba-object.c"
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	GParamSpec   *param_spec;

	param_spec = g_param_spec_pointer
		("object" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (g_object_class,
		PROP_OBJECT,
		param_spec);
	param_spec = g_param_spec_string
		("iid" /* name */,
		 NULL /* nick */,
		 NULL /* blurb */,
		 NULL /* default_value */,
		 (GParamFlags)(G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (g_object_class,
		PROP_IID,
		param_spec);
    }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:CORBA:Object::set_property"
{
	MNCORBAObject *self G_GNUC_UNUSED;

	self = MN_CORBA_OBJECT (object);

	switch (property_id) {
	case PROP_OBJECT:
		{
#line 39 "mn-corba-object.gob"

      if (selfp->object != CORBA_OBJECT_NIL)
	CORBA_Object_release(selfp->object, NULL);

      selfp->object = g_value_get_pointer(VAL);

      if (selfp->object != CORBA_OBJECT_NIL)
	CORBA_Object_duplicate(selfp->object, NULL);
    
#line 209 "mn-corba-object.c"
		}
		break;
	case PROP_IID:
		{
#line 57 "mn-corba-object.gob"
{ char *old = self->_priv->iid; self->_priv->iid = g_value_dup_string (VAL); g_free (old); }
#line 216 "mn-corba-object.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:CORBA:Object::get_property"
{
	MNCORBAObject *self G_GNUC_UNUSED;

	self = MN_CORBA_OBJECT (object);

	switch (property_id) {
	case PROP_OBJECT:
		{
#line 49 "mn-corba-object.gob"

      if (selfp->object != CORBA_OBJECT_NIL)
	CORBA_Object_duplicate(selfp->object, NULL);

      g_value_set_pointer(VAL, selfp->object);
    
#line 252 "mn-corba-object.c"
		}
		break;
	case PROP_IID:
		{
#line 57 "mn-corba-object.gob"
g_value_set_string (VAL, self->_priv->iid);
#line 259 "mn-corba-object.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__



#line 49 "mn-corba-object.gob"
CORBA_Object 
mn_corba_object_get_object (MNCORBAObject * self)
#line 279 "mn-corba-object.c"
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::get_object"
{
#line 37 "mn-corba-object.gob"
		CORBA_Object val; g_object_get (G_OBJECT (self), "object", &val, NULL); return val;
}}
#line 286 "mn-corba-object.c"
#undef __GOB_FUNCTION__

#line 39 "mn-corba-object.gob"
void 
mn_corba_object_set_object (MNCORBAObject * self, CORBA_Object val)
#line 292 "mn-corba-object.c"
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::set_object"
{
#line 37 "mn-corba-object.gob"
		g_object_set (G_OBJECT (self), "object", val, NULL);
}}
#line 299 "mn-corba-object.c"
#undef __GOB_FUNCTION__

#line 61 "mn-corba-object.gob"
static GObject * 
___3_mn_corba_object_constructor (GType type G_GNUC_UNUSED, unsigned int n_construct_properties, GObjectConstructParam * construct_params)
#line 305 "mn-corba-object.c"
#define PARENT_HANDLER(___type,___n_construct_properties,___construct_params) \
	((G_OBJECT_CLASS(parent_class)->constructor)? \
		(* G_OBJECT_CLASS(parent_class)->constructor)(___type,___n_construct_properties,___construct_params): \
		((GObject * )0))
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::constructor"
{
#line 63 "mn-corba-object.gob"
	
    GObject *object;
    Self *self;
    CORBA_Object corba_object;

    object = PARENT_HANDLER(type, n_construct_properties, construct_params);
    self = SELF(object);

    corba_object = bonobo_activation_activate_from_id(selfp->iid, 0, NULL, NULL);
    if (corba_object != CORBA_OBJECT_NIL)
      {
	self_set_object(self, corba_object);
	CORBA_Object_release(corba_object, NULL);
      }

    selfp->monitor_source = mn_g_timeout_add_gdk_locked(1000, self_monitor_cb, self);

    return object;
  }}
#line 333 "mn-corba-object.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 83 "mn-corba-object.gob"
static void 
___4_mn_corba_object_finalize (GObject * object G_GNUC_UNUSED)
#line 340 "mn-corba-object.c"
#define PARENT_HANDLER(___object) \
	{ if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(___object); }
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::finalize"
{
#line 85 "mn-corba-object.gob"
	
    Self *self = SELF(object);

    mn_locked_g_source_remove(selfp->monitor_source);

    PARENT_HANDLER(object);
  }}
#line 355 "mn-corba-object.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 93 "mn-corba-object.gob"
static gboolean 
mn_corba_object_monitor_cb (gpointer data)
#line 362 "mn-corba-object.c"
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::monitor_cb"
{
#line 95 "mn-corba-object.gob"
	
    Self *self = data;

    if (selfp->object != CORBA_OBJECT_NIL)
      {
	if (! bonobo_unknown_ping(selfp->object, NULL))
	  self_set_object(self, CORBA_OBJECT_NIL);
      }
    else
      {
	CORBA_Object object;

	object = bonobo_activation_activate_from_id(selfp->iid, 0, NULL, NULL);
	if (object != CORBA_OBJECT_NIL)
	  {
	    self_set_object(self, object);
	    CORBA_Object_release(object, NULL);
	  }
      }

    return TRUE;		/* keep source */
  }}
#line 389 "mn-corba-object.c"
#undef __GOB_FUNCTION__

#line 118 "mn-corba-object.gob"
MNCORBAObject * 
mn_corba_object_new (const char * iid)
#line 395 "mn-corba-object.c"
{
#define __GOB_FUNCTION__ "MN:CORBA:Object::new"
{
#line 120 "mn-corba-object.gob"
	
    return GET_NEW_VARG(MN_CORBA_OBJECT_PROP_IID((char *) iid), NULL);
  }}
#line 403 "mn-corba-object.c"
#undef __GOB_FUNCTION__
