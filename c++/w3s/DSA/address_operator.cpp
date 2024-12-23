#include <iostream>

// changes the value of variable argument passed using the address operator
// no return statement or values, direct data manipulation achieved with '&'.
void changeNum(int& varToChange) {
    varToChange = 67;
}

int main() {
    int num = 34;
    
    std::cout << "Value before function call: " << num << std::endl;
    changeNum(num);
    std::cout << "Value after function call: " << num;

    return 0;
}
