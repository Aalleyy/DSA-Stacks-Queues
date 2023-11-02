#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    capacity = 10; // Initial capacity of the dynamic array
    arr = new double[capacity];
    size = 0;
    front = 0;
    rear = -1;
}

Queue::Queue(Queue& queue) {
    capacity = queue.capacity;
    arr = new double[capacity];
    size = queue.size;
    front = queue.front;
    rear = queue.rear;
    for (int i = 0; i < size; i++) {
        arr[i] = queue.arr[i];
    }
}

Queue::~Queue() {
    delete[] arr; // Deallocate the memory for the dynamic array
}

bool Queue::empty() {
    return size == 0;
}

void Queue::enqueue(double x) {
    if (size == capacity) {
        // Increase capacity if the array is full
        double* new_arr = new double[2 * capacity];
        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[(front + i) % capacity];
        }
        delete[] arr;
        arr = new_arr;
        capacity *= 2;
        front = 0;
        rear = size - 1;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = x;
    size++;
}

double Queue::dequeue() {
    if (size > 0) {
        double frontValue = arr[front];
        front = (front + 1) % capacity;
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
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
}
