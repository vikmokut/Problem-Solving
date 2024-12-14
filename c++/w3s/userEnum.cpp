#include <iostream>

// define enumerator
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

enum PaymentMethod {
    CreditCard,
    DebitCard,
    PayPal,
    CashOnDelivery
};

int main() {
    enum UserRole currentUser = ADMIN;
    
    switch (currentUser) {
        case 0:
            std::cout << "FULL ACCESS";
            break;
        case 1:
            std::cout << "FAIR ACCESS";
            break;
        case 2:
            std::cout << "LIMITED ACCESS";
            break;
    }
}
