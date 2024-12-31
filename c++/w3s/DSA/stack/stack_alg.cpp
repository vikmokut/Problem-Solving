#include <vector>
#include "stack.h"
#include <iostream>

// adds items to stack
void Stack::push(int value) {
    myStack.push_back(value);
}

// removes the last element
void Stack::pop() {
    if (myStack.empty())
        std::cout << "Stack is empty\n";
    else
        std::cout << "Removing top element...\n";
        myStack.pop_back();
}

// returns the topmost/last element
int Stack::peek() {
    return myStack.back();
}

// checks if stack has content
bool Stack::isEmpty() {
    return myStack.empty();
}

// returns the length of the stack
int Stack::size() {
    return myStack.size();
}

void Stack::printStack() {
    if (myStack.empty())
        std::cout << "Stack is empty!\n";
    else {
        for (int i : myStack) 
            std::cout << i << ", ";
        putchar('\n');
    }
}
