#include <iostream>

int main() {
    // Write C++ code here
    int initTerm = 0;
    int subTerm = 1;
    
    std::cout << initTerm << '\n' << subTerm << '\n';
    
    for (int i = 0; i < 18; i++) {
        subTerm += initTerm;
        initTerm = subTerm - initTerm;
        std::cout << subTerm << '\n';
    }

    return 0;
}
