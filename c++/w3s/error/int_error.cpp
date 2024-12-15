#include <iostream>

int main() {
    int num;

    try {
        std::cout << "Enter an integer: ";
        std::cin >> num;

        if (std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter an integer.");
        }

        std::cout << "You entered: " << num << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
