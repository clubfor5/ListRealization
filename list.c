#include "list.h"
struct Node
{
    ElementType Element;
    Position Next;
}

bool
IsEmpty(List L)
{
    return L->Next == NULL;
}

bool IsLast(Position P, List L)
{
    return P->Next == NULL;
}

Position Find(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while (P != NULL &&P->Element ！ = X)
        P = P->Next;
        
        return P;
}

void Delete(ElementType X, List L) //在一个链表中删除一个节点
{
    Position P,TmpCell;
    P = FindPrevious(X,L); //P现在指向要删除的元素的前一个节点
    if(!IsLast(P ,L))   //这里不是很能理解
    {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;//把指针连接上去
        free(TmpCell);// 这里需要查一下
    }
}

Position FindPrevious(ElementType X,List L)
{   
    Position P;
    P = L;
    while(P->Next != NULL && P->Next->Element != X)
        P = P->Next;
    
    return P;
}