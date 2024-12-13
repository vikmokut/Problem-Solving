#include <iostream>
using namespace std;

class Patient {
	// implement necessary data encapsulation
	private:
		int patientID;
		string fullname;
		int age;
		string diagnosis;

	public:
		void setPatientID (int id) {
			patientID = id;
		}

		void setName (string name) {
			fullname = name;
		}

		void setAge (int ptAge) {
			age = ptAge;
		}
		
		void setDiagnosis (string diag) {
			diagnosis = diag;
		}

		// data retrieval methods
		void printPatientInfo() {
			cout << "========== PATIENT'S SUMMARY ==========\n";
			cout << "ID: \t\t" << patientID << "\n";
			cout << "Name:\t\t" << fullname << "\n";
			cout << "Age:\t\t" << age << "\n";
			cout << "Diagnosis:\t" << diagnosis << "\n";
		}

};

int main() {
	Patient patient1;
	patient1.setPatientID(12121);
	patient1.setAge(25);
	patient1.setName("Treasure Sunderland");
	patient1.setDiagnosis("Patient presented with history of recurring fever. ?malaria");
	
	patient1.printPatientInfo();

	return 0;
};
