#ifndef STACK_H
#define STACK_H


class Stack {
public:
     // constructor
     Stack();
     // copy constructor
     Stack(const Stack& stack);
     // destructor
     ~Stack();
     //bool function
     bool empty() const;
     //push an element onto the stack
     void push(const double x);
     // change the stack
     double pop();
     // get the top value of stack
     double top() const;
     // check if stack is full
     bool full();
     //display all elements
     void print() const;
private:
    //max stack size
    int maxTop;
    //current top element of stack
    int Top;
    //element array
    double* values;
};

#endif // STACK_H
