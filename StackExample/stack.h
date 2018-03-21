#ifndef STACK_H
#define STACK_H
#include <Arduino.h>
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;
#define ElementType int
uint8_t IsEmpty(Stack s);
Stack CreateStack(void);
void DisposeStack(Stack s);
void MakeEmpty(Stack s);
void Push(ElementType X,Stack S);
void Pop(Stack S);
ElementType Top(Stack S);
struct Node
{
    ElementType Element;
    PtrToNode Next;
};
#endif
