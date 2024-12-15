#include <iostream>
using namespace std;

int main() {
    string letter;
    
    try {
        cout << "enter a letter: ";
        cin >> letter;
    
        if (letter.length() > 1) {
            throw invalid_argument("Enter one letter at a time to guess");
        }
        cout << "You entered: " << letter << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}
