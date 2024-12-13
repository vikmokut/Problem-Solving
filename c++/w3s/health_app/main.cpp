#include <iostream>
#include "health_app.h"
using namespace std;
#include <string>

int main() {
	const string filename = "patients.txt";
	int choice;

	do {
		cout << "\n=============== EMR MENU ===============\n";
		cout << "1. Add Patient\n";
		cout << "2. View Patient\n";
		cout << "3. Edit Patient\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
			case 1:
				addPatient(filename);
				break;
			case 2:
				viewPatient(filename);
				break;
			case 3:
				editPatient(filename);
				break;
			case 4:
				cout << "Exiting the application.\n";
				break;
			default:
				cerr << "Invalid choice, Please try again.\n";
		}
	} while (choice != 4);

	return 0;
}
