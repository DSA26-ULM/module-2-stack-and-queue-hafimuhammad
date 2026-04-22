#ifndef STACK_H
#define STACK_H

#include <stdexcept>

#define MAX 100

struct Stack {
    int data[MAX];
    int top = -1;
};

inline void init(Stack* s) { s->top = -1; }
inline bool isEmpty(const Stack* s) { return s->top == -1; }
inline bool isFull(const Stack* s) { return s->top == MAX - 1; }

inline void push(Stack* s, int value) {
    if (isFull(s)) throw std::overflow_error("Stack penuh!");
    s->data[++s->top] = value;
}

inline void pop(Stack* s) {
    if (isEmpty(s)) throw std::underflow_error("Stack kosong!");
    s->top--;
}

inline int peek(const Stack* s) {
    if (isEmpty(s)) throw std::underflow_error("Stack kosong!");
    return s->data[s->top];
}

#endif