#include <iostream>

void fibonacci(int initTerm, int subTerm, int count) {
    if (count == 2)
        return;
    subTerm += initTerm;
    initTerm = subTerm - initTerm;
    std::cout << subTerm << '\n';
    count--;
    fibonacci(initTerm, subTerm, count);
}

int main() {
    int initTerm = 0;
    int subTerm = 1;
    int lastTerm = 20;
    
    std::cout << initTerm << '\n' << subTerm << '\n';
    fibonacci(initTerm, subTerm, lastTerm);
    
    return 0;
}
