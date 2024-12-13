#include <iostream>
using namespace std;
#include <fstream>
#include <sstream>

// construction of a patient struct
struct Patient {
	int id;
	string name;
	int age;
	string condition;
};

// function to add a new patient
void addPatient(const string& filename) {
	
	Patient patient; // new patient object

	cout << "\nEnter Patient ID:\t";
	cin >> patient.id;
	cin.ignore(); // clear newline from input buffer

	cout << "Enter Patient Name:\t";
	getline(cin, patient.name);

	cout << "Enter Patient Age:\t";
	cin >> patient.age;
	cin.ignore();

	cout << "Enter Condition:\t";
	getline(cin, patient.condition);

	// open file in append mode
	ofstream file(filename, std::ios::app);

	// check if file exist, append content.
	if (file) {
		file << patient.id << ',' << patient.name << ',' << patient.age << ',' << patient.condition << '\n';
		cout << "\n***** Patient added Successfully. *****\n";
	} else {
		cerr << "XXX Error opening file. XXX\n";
	}
}


// function to view all patient record
void viewPatient(const string& filename) {
	ifstream file(filename);
	if (file) {
		string line;
		cout << "\n=============== PATIENT RECORDS ===============\n\n";
		cout << "ID \t" << "NAME\t\t\t" << "AGE\t" << "CONDITION\n\n";
		while (getline(file, line)) {
			istringstream iss(line);
			Patient patient;
			string temp;
			getline(iss, temp, ',');
			patient.id = stoi(temp);
			getline(iss, patient.name, ',');
			getline(iss, temp, ',');
			patient.age = stoi(temp);
			getline(iss, patient.condition, ',');

			cout << patient.id << "\t" << patient.name << "\t\t" << patient.age << "\t" << patient.condition << '\n';
		}
	} else {
		cerr << "XXX Error opening file for reading. XXX\n";
	}
}

// function to edit existing patient entry.
void editPatient(const string& filename) {
	cout << "\n***** Work in Progress! *****\n";
}
