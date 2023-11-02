#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    size = 0;
}

Stack::Stack(const Stack& stack) {
    size = stack.size;
    for (int i = 0; i < size; i++) {
        arr[i] = stack.arr[i];
    }
}

Stack::~Stack() {
    // Destructor bo
}

bool Stack::empty() const {
    return size == 0;
}

void Stack::push(const double x) {
    if (size < 10000) {
        arr[size] = x;
        size++;
    } else {
        cerr << "Stack overflow error: Cannot push more elements onto the stack." << endl;
    }
}

double Stack::pop() {
    if (size > 0) {
        size--;
        return arr[size];
    } else {
        cerr << "Stack underflow error: Cannot pop from an empty stack." << endl;
        return 0;
    }
}

double Stack::top() const {
    if (size > 0) {
        return arr[size - 1];
    } else {
        cerr << "The stack is empty. There is no top element." << endl;
        return 0;
    }
}

bool Stack::full() {
    return size == 10000;
}

void Stack::print() const {
    if (size == 0) {
        cout << "The stack is empty. There is nothing to print." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
