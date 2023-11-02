#include "queue.h"
#include <iostream>

using namespace std;

Queue::Queue() : front(nullptr), rear(nullptr), size(0) {}

Queue::Queue(Queue& queue) {
    if (queue.front == nullptr) {
        front = nullptr;
        rear = nullptr;
        size = 0;
    } else {
        Node* temp = queue.front;
        front = new Node;
        front->data = temp->data;
        front->next = nullptr;
        rear = front;
        temp = temp->next;
        while (temp != nullptr) {
            rear->next = new Node;
            rear = rear->next;
            rear->data = temp->data;
            rear->next = nullptr;
            temp = temp->next;
        }
        size = queue.size;
    }
}

Queue::~Queue() {
    while (!empty()) {
        dequeue();
    }
}

bool Queue::empty() {
    return size == 0;
}

bool Queue::full(){
    return 0; //Always false in case of Linked Lists
}
void Queue::enqueue(double x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    if (rear == nullptr) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}

double Queue::dequeue() {
    if (empty()) {
        cerr << "Queue is empty. Cannot dequeue from an empty queue." << endl;
        return 0;
    }
    double frontValue = front->data;
    Node* temp = front;
    front = front->next;
    delete temp;
    size--;
    if (front == nullptr) {
        rear = nullptr;
    }
    return frontValue;
}

void Queue::print() {
    if (empty()) {
        cout << "The queue is empty. There is nothing to print." << endl;
    } else {
        cout << "Queue elements: ";
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}
