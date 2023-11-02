#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    // Create a queue object
    Queue queue;

    // Testing enqueue function
    queue.enqueue(7);
    queue.enqueue(16);
    queue.enqueue(25);

    // Testing print function
    cout << "Current queue: ";
    queue.print();

    // Testing dequeue function
    cout << "Dequeued elements: ";
    while (!queue.empty()) {
        cout << queue.dequeue() << " ";
    }
    cout << endl;

    // Testing empty function
    if (queue.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // Testing full function
    if (queue.full()) {
        cout << "Queue is full" << endl;
    } else {
        cout << "Queue is not full" << endl;
    }

    return 0;
}
