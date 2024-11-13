#include <iostream>
using namespace std;
/**
 *  
 */

// create a student class
class Student {
    public:
        string fname;
        string sname;
        string level;
        int age;
        int id;
        float grade;
    
    void greeting(string name);

    // notice how we could use the attributes within the
    // method to run our program without necessarily passing 
    // arguments to the function call.
    void getGrades() {
        if (grade >= 4.5) {
            cout << "Grade: Excellent";
        } else if (grade >= 4.0 && grade < 4.5) {
            cout << "Grade: Second Class Upper";
        } else if (grade >= 3.5 && grade < 4.0) {
            cout << "Grade: Second Class Lower";
        } else if (grade < 3.5) {
            cout << "Grade: Pass";
        }
        // return a;
    }

    // create a constructor for the Student Class
    // this runs automatically whenever an obj of the class Student is created.
    // ps: has same name as class, always public and takes no return value.
    Student() {
        cout << "MMMM                  MMMM\n";
        cout << "MM  MM              MM  MM\n";
        cout << "MM    MM          MM    MM\n";
        cout << "MM      MM      MM      MM\n";
        cout << "MM        MM  MM        MM\n";
        cout << "MM          MM          MM\n";
        cout << "MM                      MM\n";
        cout << "MM                      MM\n";
        cout << "MM                      MM\n\n";
        cout << "__MIVA student's database__\n\n";
    }
};

int main() {
    // create an object of student
    Student student1;
    student1.fname = "Crowford";
    student1.sname = "Standley";
    student1.level = "100L";
    student1.age = 34;
    student1.id = 1001;
    student1.grade = 4.0;

    cout << "First Name:\t" << student1.fname << endl;
    cout << "Surname:\t" << student1.sname << endl;
    cout << "Level:\t\t" << student1.level << endl;
    cout << "Grade:\t\t" << student1.grade << endl << endl;

    student1.greeting(student1.fname);
    putchar('\n');

    student1.getGrades();

    return 0;
}

// defining a method for class Student outside of the class
// note the use of the :: - scope resolution operator
// also note that you must declare the variable inside of the class
void Student::greeting(string name) {
    cout << "Hello " << name;
}
