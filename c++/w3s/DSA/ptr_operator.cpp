#include <iostream>

// changes the value of the variable, num.
// an alternative to the & operator application
void changeNum(int* varToChange) {
    *varToChange = 67;
}

int main() {
    int num = 34;
    int* numptr = &num; // pointer variable
    
    std::cout << "Value before function call: " << num << std::endl;
    changeNum(numptr); 
    std::cout << "Value after function call: " << num;

    return 0;
}
