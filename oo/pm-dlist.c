#include "pm-dlist.h"

G_DEFINE_TYPE (PMDList, pm_dlist, G_TYPE_OBJECT);

static void
pm_dlist_init (PMDList *self)
{
  g_print ("instance struct initial\t");
  self->head = NULL;
  self->tail = NULL;
}

static void
pm_dlist_class_init (PMDListClass *kclass)
{
  g_print ("\tclass instance struct initial\t");
}
