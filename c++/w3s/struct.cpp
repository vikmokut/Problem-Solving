#include <iostream>
using namespace std;

// method I - named struct
// allows us to treat struct like a data type
struct Student {
	string fname;
	string surname;
	int age;
	int level;
	float grade;
};

// method II - unnamed, with structure variables listed
struct {
	string fullname;
	string nationality;
	int age;
	int id;
}person1, person2;


int main() {
	// accessing method I struct
	Student student1;
	student1.fname = "Victor";
	student1.surname = "Mokut";
	student1.age = 34;
	student1.level = 100;
	student1.grade = 5.0;

	cout << "=========== STUDENT'S DATA ==========\n";
	cout << "Student's Name:\t\t" << student1.fname + ' ' + student1.surname << endl;
	cout << "Student's age\t\t" << student1.age<< endl;
	cout << "Student's Level:\t" << student1.level << endl;
	cout << "Student's Grade:\t" << student1.grade << "\n\n";

	// accessing method II struct
	person1.fullname = "Victor Mokut";
	person1.nationality = "Nigerian";
	person1.age = 34;
	person1.id = 220220;

	cout << person1.fullname << '\n';
	cout << person1.nationality << '\n';
	cout << person1.age << '\n';
	cout << person1.id << '\n';

	return 0;
}
