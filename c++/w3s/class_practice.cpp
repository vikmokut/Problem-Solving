#include <iostream>
using namespace std;

class ParentClass {
    private:
        string name;
        int age;
        
    public:
        void setData(string n, int a) {
            name = n;
            age = a;
        }
        
        void getData() {
            cout << "Name:\t" << name << endl;
            cout << "Age:\t" << age << endl;
        }
};

class ChildClass: public ParentClass {
    public:
        char grade;
        ChildClass() {
            cout << "I am the child class - if you see this, then it is grandchild's work!\n";
        }
};

class GrandChild: public ChildClass {
    public:
        GrandChild() {
            cout << "I am the grandchild accessing child and parent data!\n";
        }
};

class banking_service {
    
};

int main() {
    GrandChild myObj;
    myObj.setData("Luci Cryptic", 39);
    
    myObj.getData();
    
    return 0;
}
