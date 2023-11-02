#ifndef QUEUE_H
#define QUEUE_H


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
    //add element to queue
    void enqueue(double x);
    //remove element from queue
    double dequeue();
    //display all values
    void print(void);
    //check if queue is full
    bool full();
private:
    double arr[1000];
    int size;
};


#endif // QUEUE_H
