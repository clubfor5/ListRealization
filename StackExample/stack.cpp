#include "stack.h"

uint8_t IsEmpty(Stack S)
{
    return S->Next == NULL;
}

Stack CreateStack(void)
{
    Stack S;
    S = malloc(sizeof(struct Node));
    if(S == NULL)
       {
           Serial.println("out of space!");
           return NULL;
       }
    Serial.println("Successful Create A Stack!");
    S->Next = NULL;
    MakeEmpty(S);
    return S;
}

void MakeEmpty(Stack S)
{
    if(S==NULL)
    {
        Serial.println("must use CreateStack first!");
        return;
    }
    else 
    {
        while(!IsEmpty(S))
            Pop(S);
    }
}

void Pop(Stack S)
{
    PtrToNode FirstCell;
    if(IsEmpty(S))
    {
        Serial.println("EmptyStack");
    }
    else 
    {
        FirstCell = S->Next;
        S->Next = S->Next->Next;
        free(FirstCell);
    }
}

void Push(ElementType X,Stack S)
{
    PtrToNode TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if(TmpCell == NULL)
    {
        Serial.println("Out of space!");
        return;
    }
    else
    {
        TmpCell->Element = X;
        TmpCell->Next = S->Next;
        S->Next = TmpCell;
    }

}

ElementType Top(Stack S)
{
    if(IsEmpty(S))
        {
            Serial.println("Empty Stack!");
            return 0;
        }
    else 
        {
            return S->Next->Element;
        }
}
