#include <iostream>
#include "stack.h"

int main() {
    Stack currentState;
    int user;
    
    do {
        std::cout << "========== System State Monitor ==========\n"
            << "0. Exit\n"
            << "1. Print All States\n"
            << "2. Set State\n"
            << "3. Restore Last State\n"
            << "4. View Current State\n"
            << "5. Empty State Status\n"
            << "6. Number of States\n\n"
            << "Select an action: ";
        std::cin >> user;
        std::cin.ignore();
        
        switch (user) {
            case 1:
                currentState.printStack();
                break;
            case 2:
                int newState;
                std::cout << "Enter an integer state, 0 | 1: ";
                std::cin >> newState;
                std::cin.ignore();
                currentState.push(newState);
                std::cout << "New state set successfully: \n";
                break;
            case 3:
                currentState.pop();
                std::cout << "Previous state restored: \n";
                break;
            case 4:
                std::cout << "Current state: " << currentState.peek() << '\n';
                break;
            case 5:
                if (currentState.isEmpty()) std::cout << "System state is empty! \n";
                else std::cout << "System state is not empty\n";
                break;
            case 6:
                std::cout << "State size: " << currentState.size() << '\n';
                break;
            default:
                if (user != 0)
                    std::cout << "Check your request and try again: \n";
        }
        putchar('\n');
    } while (user != 0);
    
    return 0;
}
