#include "stack.h"
Stack S;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
S =  CreateStack();
int a = 3;
Push(a,S);
Serial.println(Top(S));
Push(4,S);
Serial.println(Top(S));
Pop(S);
Serial.println(Top(S));
Pop(S);
Serial.println(Top(S));

}

void loop() {
  // put your main code here, to run repeatedly:

}
