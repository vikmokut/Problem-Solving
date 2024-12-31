#ifndef STACK_H
#define STACK_H
#include <vector>

// implement a stack DS with arrays with basic operations
class Stack {
    private:
	    std::vector<int> myStack;
    public:
        void printStack();
        void push(int);
        void pop();
        int peek();
        bool isEmpty();
        int size();
        
};

#endif
