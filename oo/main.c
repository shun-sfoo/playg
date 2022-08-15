#include "pm-dlist.h"
int
main (void)
{

  int i;
  PMDList *list;
  for (i = 0; i < 3; ++i)
    {
      list = g_object_new (PM_TYPE_DLIST, NULL);
      g_object_unref (list);
    }

  list = g_object_new (PM_TYPE_DLIST, NULL);
  if (G_IS_OBJECT (list))
    g_print ("\tthis is a gobjcet instance\t");
}
