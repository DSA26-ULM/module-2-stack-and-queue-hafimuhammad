#ifndef STACK_H
#define STACK_H

#define MAX 100

struct Stack {
    int data[MAX];
    int* top;
};

void init(Stack* s) {
    s->top = s->data - 1;
}

bool isEmpty(const Stack* s) {
    return s->top < s->data;
}

bool isFull(const Stack* s) {
    return s->top >= s->data + MAX - 1;
}

void push(Stack* s, int value) {
    if (!isFull(s)) {
        s->top++;
        *(s->top) = value;
    }
}

void pop(Stack* s) {
    if (!isEmpty(s)) {
        s->top--;
    }
}

int peek(const Stack* s) {
    return *(s->top);
}

#endif