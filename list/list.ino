#include "list.h"
List L = CreateList();
Position P = malloc(sizeof(Node));


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Position Q = malloc(sizeof(Node));
  Q->Next = NULL;
  Q->Element = 100;
  L->Next = Q;
  Insert(3, L, Header(L));
  Insert(4, L, Header(L));
  Insert(5, L, Header(L));
  Insert(6, L, Header(L));
  Insert(7, L, Header(L));
  Position P = L;
  while (P->Next != NULL)
  {
    P = P->Next;
    Serial.println(P->Element);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  while (1);
}
