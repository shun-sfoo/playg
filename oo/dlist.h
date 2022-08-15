#pragma DLIST_H

typedef struct _DListNode DListNode;
struct _DListNode
{
  DListNode *prev;
  DListNode *next;
  void *data;
};

typedef struct _DList DList;
struct DList
{
  DListNode *head;
  DListNode *tail;
};
