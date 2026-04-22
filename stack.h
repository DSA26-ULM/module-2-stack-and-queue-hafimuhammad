#ifndef STACK_H
#define STACK_H

#include <stdexcept>

#define MAX 100

struct Stack {
    int data[MAX];
    int top = -1;
};


#endif