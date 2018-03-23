#ifndef LIST_H
#define LIST_H
#include <Arduino.h>  

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
#define ElementType int
struct Node
{
    ElementType Element;
    Position Next;
};
List CreateList();
List MakeEmpty(List L);
bool IsEmpty(List L);
bool IsLast(Position P,List L);
Position Find(ElementType X,List L);
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X,List L);
void Insert(ElementType X,List L,Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);
#endif
