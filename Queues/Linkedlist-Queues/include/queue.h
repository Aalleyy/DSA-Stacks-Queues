#ifndef QUEUE_H
#define QUEUE_H

struct Node {
    double data;
    Node* next;
};
class Queue {
public:
    //circular queue
    //constructor
    Queue();
    //copy constructor
    Queue(Queue& queue);
    //destructor
    ~Queue();
    //bool function
    bool empty();
    bool full();
    //add element to queue
    void enqueue(double x);
    //remove element from queue
    double dequeue();
    //display all values
    void print(void);
private:
    Node* front; //front pointer
    Node* rear; // rear pointer
    int size; //number of elements
};


#endif // QUEUE_H
