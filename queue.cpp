#include "queue.h"

void init(Queue* q) {
    q->front_idx = 0;
    q->rear_idx = MAX - 1;
    q->count = 0;
}

bool isEmpty(const Queue* q) {
    return q->count == 0;
}

bool isFull(const Queue* q) {
    return q->count == MAX;
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) throw std::overflow_error("Queue penuh!");
    q->rear_idx = (q->rear_idx + 1) % MAX;
    q->data[q->rear_idx] = value;
    q->count++;
}

void dequeue(Queue* q) {
    if (isEmpty(q)) throw std::underflow_error("Queue kosong!");
    q->front_idx = (q->front_idx + 1) % MAX;
    q->count--;
}

int front(const Queue* q) {
    if (isEmpty(q)) throw std::underflow_error("Queue kosong!");
    return q->data[q->front_idx];
}

int back(const Queue* q) {
    if (isEmpty(q)) throw std::underflow_error("Queue kosong!");
    return q->data[q->rear_idx];
}