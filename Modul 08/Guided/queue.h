#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE 5

typedef struct queue {
    int info[MAX_QUEUE];
    int head;
    int tail;
    int count;
} Queue;

void createQueue(Queue &Q);
bool isEmpty(Queue Q);
bool isFull(Queue Q);
void enqueue(Queue &Q, int x);
int dequeue(Queue &Q);
void printInfo(Queue Q);

#endif
