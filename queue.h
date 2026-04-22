#ifndef QUEUE_H
#define QUEUE_H

#define MAX 100

struct Queue {
    int data[MAX];
    int* front;
    int* rear;
};

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
    if (!isFull(q)) {
        q->rear++;
        *(q->rear) = value;
    }
}

void dequeue(Queue* q) {
    if (!isEmpty(q)) {
        q->front++;
    }
}

int front(const Queue* q) {
    return *(q->front);
}

int back(const Queue* q) {
    return *(q->rear);
}

#endif