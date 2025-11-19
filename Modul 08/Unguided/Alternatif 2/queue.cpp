#include <iostream>
#include "queue.h"
using namespace std;

void CreateQueue(Queue &Q) {
    Q.head = Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1;
}

bool isFullQueue(Queue Q) {
    return (Q.head == 0 && Q.tail == MAX - 1);
}

void compress(Queue &Q) {
    int j = 0;
    for (int i = Q.head; i <= Q.tail; i++) {
        Q.info[j++] = Q.info[i];
    }
    Q.head = 0;
    Q.tail = j - 1;
}

void enqueue(Queue &Q, int x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!\n";
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = Q.tail = 0;
    } else {
        if (Q.tail == MAX - 1)
            compress(Q);

        Q.tail++;
    }

    Q.info[Q.tail] = x;
}

int dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!\n";
        return -1;
    }

    int x = Q.info[Q.head];

    if (Q.head == Q.tail) {
        Q.head = Q.tail = -1;
    } else {
        Q.head++;
    }

    return x;
}

void printInfo(Queue Q) {
    cout << "--------------------\n";

    if (isEmptyQueue(Q)) {
        cout << "Empty\n";
        return;
    }

    cout << "H: " << Q.head << " | T: " << Q.tail << " | Queue: ";
    for (int i = Q.head; i <= Q.tail; i++)
        cout << Q.info[i] << " ";
    cout << endl;
}
