#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    // Create a stack object
    Stack stack;

    // Testing push function
    stack.push(7);
    stack.push(14);
    stack.push(21);

    // Testing print function
    cout << "Current stack: ";
    stack.print();

    // Testing top function
    cout << "Top element: " << stack.top() << endl;

    // Testing pop function
    cout << "Popping elements: ";
    while (!stack.empty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    // Testing empty function
    if (stack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Testing full function
    if (stack.full()) {
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }

    return 0;
}
