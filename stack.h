#ifndef STACK_H
#define STACK_H

#define MAX 100

struct Stack {
    int data[MAX];
};


inline void push(Stack* s, int value) {
    if (isFull(s)) throw std::overflow_error("Stack penuh!");
    s->data[++s->top] = value;
}

}

}

#endif