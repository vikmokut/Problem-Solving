#include <iostream>
void studentRegistration();
void viewRegistration();
void viewGrade();

// make an unnamed struct of student.
struct {
    std::string surname;
    std::string fname;
    int level;
    int age;
    float grade;
} student;

int main () {
    int option;

    do {
        std::cout << "========== STUDENT'S PORTAL ==========\n";
        std::cout << "1. Registration \n";
        std::cout << "2. Check CGPA\n";
        std::cout << "3. View Registration Details\n";
        std::cout << "4. Exit Portal\n";
        std::cout << "Enter an option: ";
        std::cin >> option;
        
        if (option == 1)
            studentRegistration();
        else if (option == 2)
            viewGrade();
        else if (option == 3)
            viewRegistration();
        else if (option == 4)
            std::cout << "\n*****Closing the application portal*****\n";
        else
            std::cout << "\n*****Please check your options and try again*****\n";
    } while (option != 4);
    
    return 0;
}

// for registration
void studentRegistration() {
    // TODO:
    // implement data validation
    // move the data to permanent storage
    
    std::cout << "========== Registration Portal ==========\n";
    std::cout << "Enter your firstname: ";
    std::cin >> student.fname;
    std::cout << "Enter your surname: ";
    std::cin >> student.surname;
    std::cout << "Enter current level: ";
    std::cin >> student.level;
    std::cin.ignore();
    std::cout << "Enter your age: ";
    std::cin >> student.age;
    std::cin.ignore(); // catch the newline
    std::cout << "Enter your Current Grade: ";
    std::cin >> student.grade;
    std::cin.ignore();
    std::cout << "\n***** Registration Successful *****\n";
}

void viewRegistration() {
    std::cout << "\n========== STUDENT'S DETAILS ==========\n";
    std::cout << "Name:\t\t" << student.fname << ' ' << student.surname << "\n";
    std::cout << "Age:\t\t" << student.age << "\n";
    std::cout << "Level:\t\t" << student.level << "\n";
    std::cout << "Grade:\t\t" << student.grade << "\n";
}
void viewGrade() {
    std::cout << "\nYour current grade is: " << student.grade << std::endl;
}
