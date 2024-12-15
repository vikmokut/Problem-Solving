#include <iostream>
using namespace std;

// this illustrates multi-level inheritance with proper data hiding
// base class with encapsulations
class ParentClass {
    private:
        string name;
        int age;
        
    protected: 
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
    public:
        void methodtry(string nam, int num) {
            // the setData  and getData functions are protected in the base
            // so we cannot call it from the main()
            // hence this approach
            setData(nam, num);
            getData();
        }
};

int main() {
    // accessing the base class using the grandchild
    GrandChild myObj;
    myObj.methodtry("Victor", 34);
    
    // myObj.getData();
    
    return 0;
}
