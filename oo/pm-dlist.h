#pragma PM_DLIST_H
#include <glib-object.h>

#define PM_TYPE_DLIST (pm_dlist_get_type ())

typedef struct _PMDListNode PMDListNode;
struct _PMDListNode
{
  PMDListNode *prev;
  PMDListNode *next;
  void *data;
};

typedef struct _PMDList PMDList;
struct _PMDList // 实例结构体
{
  GObject parent_instance;
  PMDList *head;
  PMDList *tail;
};

typedef struct _PMDListClass PMDListClass;
struct _PMDListClass // 类结构体
{
  GObjectClass parent_instance_class;
};

GType pm_dlist_get_type (void);
