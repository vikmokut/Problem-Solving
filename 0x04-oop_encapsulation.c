#include <iostream>
using namespace std;

class CreateAccount {
    public:
        // define a constructor with parameter
        // parameter must be entered when creating an object
        CreateAccount (string username) {
            cout << "Welcome " << username << endl;
            cout << "Enter new user's fullname, account number and opening Balance.\n\n";
        }

    private:
        // declare attributes, private/protected is best practice
        // this ensures data integrity
        string fullname;
        unsigned accountNumber;
        int openingBalance;

    public:
        // declare methods to set attributes
        void createNew(string a, unsigned b, int c) {
            fullname = a;
            accountNumber = b;
            openingBalance = c;
        }

        void viewAccount() {
            cout << "Account Details:\n";
            cout << "Customer's Name:   " << fullname << endl;
            cout << "Account Number:    " << accountNumber << endl;
            cout << "Balance:           $" << openingBalance << "\n\n";
        }
};

int main() {
    string username = "Victor";
    CreateAccount newAccount1(username);
    newAccount1.createNew("Grace Worthy", 100100101, 5000);

    newAccount1.viewAccount();

    newAccount1.createNew("Finidey Fulcrum", 1011011010, 3200);
    newAccount1.viewAccount();

    return 0;
}

// improve - write a loop that does 2 things
// allows the user to create multiple new accounts using just one object
// write each new account to a file to release the single object for resuse.
