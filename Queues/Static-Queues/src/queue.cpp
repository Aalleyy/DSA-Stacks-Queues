#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    size = 0;
}

Queue::Queue(Queue& queue) {
    size = queue.size;
    for (int i = 0; i < size; i++) {
        arr[i] = queue.arr[i];
    }
}

Queue::~Queue() {
    // Destructor code here
}

bool Queue::empty() {
    return size == 0;
}

void Queue::enqueue(double x) {
    if (size < 1000) {
        arr[size] = x;
        size++;
    } else {
        cerr << "Queue is full. Cannot enqueue more elements." << endl;
    }
}

double Queue::dequeue() {
    if (size > 0) {
        double frontValue = arr[0];
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        return frontValue;
    } else {
        cerr << "Queue is empty. Cannot dequeue from an empty queue." << endl;
        return 0;
    }
}

void Queue::print() {
    if (size == 0) {
        cout << "The queue is empty. There is nothing to print." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

bool Queue::full() {
    return size == 1000;
}
