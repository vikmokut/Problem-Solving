#include <iostream>
using namespace std;
#include <vector>
void searchDiagnosis(vector<string>, string);
int count(vector<string>, string);

int main() {
    vector<string> diagnoses = {"malaria", "typhoid", "headache", "lipidemia", "peptic ulcer", "malaria", "typhoid", "headache", "lipidemia", "peptic ulcer"};
    
    // prints out the vector
    // diagnoses.push_back("Malaria");
    // for (int i = 0; i < diagnoses.size(); i++)
    //     cout << diagnoses.at(i) << "\n";
    // cout << "\n";
    
    string search;
    cout << "Enter a search term: ";
    getline(cin, search);
    
    putchar('\n');
    searchDiagnosis(diagnoses, search);
    cout << "Number of " << search << " diagnosed: " << count(diagnoses, search) << "\n";
    
    // for (string diagnosis : diagnoses) {
    //     if (diagnosis == search) {
    //         cout << diagnosis << '\n';
    //         break;
    //     }
    // }
    return 0;
};

int count(vector<string> diagnoses, string searchTerm) {
    int count = 0;
    for (string diagnosis : diagnoses) {
        if (diagnosis == searchTerm) {
            count++;
        }
    }
    return count;
}

void searchDiagnosis(vector<string> diagnoses, string searchTerm) {
    for (string diagnosis : diagnoses) {
        if (diagnosis == searchTerm) {
            cout << "Diagnosis found: " << diagnosis << '\n';
            break;
        }
    }
}
