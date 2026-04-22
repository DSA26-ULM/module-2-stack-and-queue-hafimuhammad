#ifndef STACK_H
#define STACK_H

#include <stdexcept>


struct Stack {
    long long data[MAX];
    int top;
};

void init(Stack* s);
bool isEmpty(const Stack* s);
bool isFull(const Stack* s);
void push(Stack* s, long long value);
void pop(Stack* s);
long long peek(const Stack* s);

#endif