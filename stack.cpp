#include "stack.h"

void init(Stack* s) { s->top = -1; }
bool isEmpty(const Stack* s) { return s->top == -1; }
bool isFull(const Stack* s) { return s->top == MAX - 1; }

    if (isFull(s)) throw std::overflow_error("Stack penuh!");
    s->data[++s->top] = value;
}

void pop(Stack* s) {
    if (isEmpty(s)) throw std::underflow_error("Stack kosong!");
    s->top--;
}

    if (isEmpty(s)) throw std::underflow_error("Stack kosong!");
    return s->data[s->top];
}