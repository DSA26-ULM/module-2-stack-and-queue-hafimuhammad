#include "queue.h"

void init(Queue* q) {
    q->front = q->data;
    q->rear = q->data - 1;
}

bool isEmpty(const Queue* q) {
    return q->rear < q->front;
}

bool isFull(const Queue* q) {
    return q->rear >= q->data + MAX - 1;
}

void enqueue(Queue* q, int value) {
    q->rear++;
    *(q->rear) = value;
}

void dequeue(Queue* q) {
    q->front++;
}

int front(const Queue* q) {
    return *(q->front);
}

int back(const Queue* q) {
    return *(q->rear);
