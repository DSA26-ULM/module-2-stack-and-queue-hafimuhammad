#include "stack.h"
#include <iostream>
#include <string>
using namespace std;
void init(Stack* s){
s->top = nullptr;
}

bool isEmpty(const Stack* s){
return s->top == nullptr;
}

bool isFull(const Stack* s){
return s->top == &(s->data[MAX - 1]);
}

void push(Stack* s, int value){
if (isFull(s)) throw "Stack penuh";

if (isEmpty(s)) {
s->top = s->data;
} else {
s->top++;
}
*s->top = value;
}

int pop(Stack* s){
if (isEmpty(s)) throw "Stack kosong";
int value = *s->top;
if (s->top == s->data) {
s->top = nullptr;
} else {
s->top--;
}
return value;
}

int peek(const Stack* s){
if (isEmpty(s)) throw "Stack kosong";
return *s->top;
}
