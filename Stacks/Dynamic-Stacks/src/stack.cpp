#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    maxTop = 10000; // Maximum stack size
    Top = -1; // Current top element of the stack, initialized to -1
    values = new double[maxTop]; // Allocating memory for the dynamic array
}

Stack::Stack(const Stack& stack) {
    maxTop = stack.maxTop;
    Top = stack.Top;
    values = new double[maxTop];
    for (int i = 0; i <= Top; i++) {
        values[i] = stack.values[i];
    }
}

Stack::~Stack() {
    delete[] values; // Deallocate the memory for the dynamic array
}

bool Stack::empty() const {
    return Top == -1;
}

void Stack::push(const double x) {
    if (Top < maxTop - 1) {
        Top++;
        values[Top] = x;
    } else {
        cerr << "Stack overflow error: Cannot push more elements onto the stack." << endl;
    }
}

double Stack::pop() {
    if (Top >= 0) {
        double topValue = values[Top];
        Top--;
        return topValue;
    } else {
        cerr << "Stack underflow error: Cannot pop from an empty stack." << endl;
        return 0;
    }
}

double Stack::top() const {
    if (Top >= 0) {
        return values[Top];
    } else {
        cerr << "The stack is empty. There is no top element." << endl;
        return 0;
    }
}

bool Stack::full() {
    return Top == maxTop - 1;
}

void Stack::print() const {
    if (Top == -1) {
        cout << "The stack is empty. There is nothing to print." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= Top; i++) {
            cout << values[i] << " ";
        }
        cout << endl;
    }
}
