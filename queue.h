#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>

#define MAX 100

struct Queue {
    int data[MAX];
    int front_idx;
    int rear_idx;
    int count;
};

void init(Queue* q);
bool isEmpty(const Queue* q);
bool isFull(const Queue* q);
void enqueue(Queue* q, int value);
void dequeue(Queue* q);
int front(const Queue* q);
int back(const Queue* q);

#endif