/* Generated by GOB (v2.0.12) on Tue Aug  9 22:01:55 2005
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 12

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-evolution-glue.h"

#include "mn-evolution-glue-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 26 "mn-evolution-glue.gob"

#include <stdio.h>
#include <camel/camel-folder.h>

/* headers from the Evolution source tree */
#include "mail/mail-tools.h"

#line 35 "mn-evolution-glue.c"
/* self casting macros */
#define SELF(x) MN_EVOLUTION_GLUE(x)
#define SELF_CONST(x) MN_EVOLUTION_GLUE_CONST(x)
#define IS_SELF(x) MN_IS_EVOLUTION_GLUE(x)
#define TYPE_SELF MN_TYPE_EVOLUTION_GLUE
#define SELF_CLASS(x) MN_EVOLUTION_GLUE_CLASS(x)

#define SELF_GET_CLASS(x) MN_EVOLUTION_GLUE_GET_CLASS(x)

/* self typedefs */
typedef MNEvolutionGlue Self;
typedef MNEvolutionGlueClass SelfClass;

/* here are local prototypes */
static void mn_evolution_glue_init (MNEvolutionGlue * o) G_GNUC_UNUSED;
static void mn_evolution_glue_class_init (MNEvolutionGlueClass * c) G_GNUC_UNUSED;
static GNOME_MailNotification_Evolution_MessageSeq * mn_evolution_glue_getUnseenMessages (PortableServer_Servant servant, const CORBA_char * folder_uri, CORBA_Environment * env) G_GNUC_UNUSED;
static CORBA_string mn_evolution_glue_getFolderName (PortableServer_Servant servant, const CORBA_char * folder_uri, CORBA_Environment * env) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static BonoboObjectClass *parent_class = NULL;

/* Short form macros */
#define self_getUnseenMessages mn_evolution_glue_getUnseenMessages
#define self_getFolderName mn_evolution_glue_getFolderName
#define self_new mn_evolution_glue_new
GType
mn_evolution_glue_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNEvolutionGlueClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_evolution_glue_class_init,
			NULL, /* class_finalize */
			NULL, /* class_data */
			sizeof (MNEvolutionGlue),
			0, /* n_preallocs */
			(GInstanceInitFunc)  mn_evolution_glue_init,
			NULL
		};

		type = bonobo_type_unique (
			BONOBO_OBJECT_TYPE,
			POA_GNOME_MailNotification_Evolution_Glue__init, NULL,
			G_STRUCT_OFFSET (MNEvolutionGlueClass, _epv),
			&info, "MNEvolutionGlue");
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNEvolutionGlue *)g_object_new(mn_evolution_glue_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNEvolutionGlue * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNEvolutionGlue *
GET_NEW_VARG (const char *first, ...)
{
	MNEvolutionGlue *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNEvolutionGlue *)g_object_new_valist (mn_evolution_glue_get_type (), first, ap);
	va_end (ap);
	return ret;
}

static void 
mn_evolution_glue_init (MNEvolutionGlue * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Evolution:Glue::init"
}
#undef __GOB_FUNCTION__
static void 
mn_evolution_glue_class_init (MNEvolutionGlueClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Evolution:Glue::class_init"

	parent_class = g_type_class_ref (BONOBO_TYPE_OBJECT);

#line 36 "mn-evolution-glue.gob"
	c->_epv.getUnseenMessages = self_getUnseenMessages;
#line 100 "mn-evolution-glue.gob"
	c->_epv.getFolderName = self_getFolderName;
#line 125 "mn-evolution-glue.c"
}
#undef __GOB_FUNCTION__



#line 36 "mn-evolution-glue.gob"
static GNOME_MailNotification_Evolution_MessageSeq * 
mn_evolution_glue_getUnseenMessages (PortableServer_Servant servant, const CORBA_char * folder_uri, CORBA_Environment * env)
#line 134 "mn-evolution-glue.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Glue::getUnseenMessages"
{
#line 40 "mn-evolution-glue.gob"
	
    CamelFolder *folder;
    GPtrArray *summary;
    int i;
    GSList *infos = NULL;
    GNOME_MailNotification_Evolution_MessageSeq *seq;

    folder = mail_tool_uri_to_folder(folder_uri, 0, NULL);
    if (! folder)
      {
	bonobo_exception_set(env, ex_GNOME_MailNotification_Evolution_Glue_FolderNotFound);
	return NULL;
      }

    summary = camel_folder_get_summary(folder);

    for (i = 0; i < summary->len; i++)
      {
	CamelMessageInfo *info = summary->pdata[i];

	if ((camel_message_info_flags(info) & CAMEL_MESSAGE_SEEN) == 0)
	  infos = g_slist_append(infos, info);
      }

    seq = GNOME_MailNotification_Evolution_MessageSeq__alloc();
    seq->_length = g_slist_length(infos);

    if (seq->_length > 0)
      {
	GSList *l;

	seq->_buffer = CORBA_sequence_GNOME_MailNotification_Evolution_Message_allocbuf(seq->_length);
	for (l = infos, i = 0; l != NULL; l = l->next, i++)
	  {
	    CamelMessageInfo *info = l->data;
	    const CamelSummaryMessageID *id;
	    char hexhash[sizeof(CamelSummaryMessageID) * 2 + 1];
	    int j;

	    id = camel_message_info_message_id(info);
	    for (j = 0; j < sizeof(id->id.hash); j++)
	      sprintf(hexhash + j * 2, "%.2x", id->id.hash[j]);
	    
	    seq->_buffer[i].sent_time = camel_message_info_date_sent(info);
	    seq->_buffer[i].id = CORBA_string_dup(hexhash);
	    seq->_buffer[i].from = CORBA_string_dup(camel_message_info_from(info));
	    seq->_buffer[i].subject = CORBA_string_dup(camel_message_info_subject(info));
	  }

	CORBA_sequence_set_release(seq, CORBA_TRUE);

	g_slist_free(infos);
      }

    camel_folder_free_summary(folder, summary);
    camel_object_unref(folder);

    return seq;
  }}
#line 198 "mn-evolution-glue.c"
#undef __GOB_FUNCTION__

#line 100 "mn-evolution-glue.gob"
static CORBA_string 
mn_evolution_glue_getFolderName (PortableServer_Servant servant, const CORBA_char * folder_uri, CORBA_Environment * env)
#line 204 "mn-evolution-glue.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Glue::getFolderName"
{
#line 104 "mn-evolution-glue.gob"
	
    CamelFolder *folder;
    CORBA_string name = NULL;

    folder = mail_tool_uri_to_folder(folder_uri, 0, NULL);
    if (folder)
      {
	name = CORBA_string_dup(camel_folder_get_name(folder));
	camel_object_unref(folder);
      }
    else
      bonobo_exception_set(env, ex_GNOME_MailNotification_Evolution_Glue_FolderNotFound);

    return name;
  }}
#line 224 "mn-evolution-glue.c"
#undef __GOB_FUNCTION__

#line 120 "mn-evolution-glue.gob"
MNEvolutionGlue * 
mn_evolution_glue_new (void)
#line 230 "mn-evolution-glue.c"
{
#define __GOB_FUNCTION__ "MN:Evolution:Glue::new"
{
#line 122 "mn-evolution-glue.gob"
	
    return GET_NEW;
  }}
#line 238 "mn-evolution-glue.c"
#undef __GOB_FUNCTION__
