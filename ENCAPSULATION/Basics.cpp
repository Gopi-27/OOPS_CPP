#include <iostream>
using namespace std;
// BLUE PRINT OF A STUDENT
class Student {
private:
    // PRIVATE PROPERTIES CAN ONLY ACCESS INSIDE THE CLASS WITH HELP OF PUBLIC METHODS
    string name;
    int age;
    float marks;

public:
    // PUBLIC METHODS
    
    //Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        marks = 0.0;
        cout << "Default constructor called\n";
    }

    // Parameterized Constructor
    Student(string name, int age, float marks) {
        this->name = name;   // using 'this' to avoid naming conflict
        this->age = age;    // this points to the current object
        this->marks = marks;
        cout << "Parameterized constructor called\n";
    }

    //  Copy Constructor
    Student(const Student& s) {
        this->name = s.name;
        this->age = s.age;
        this->marks = s.marks;
        cout << "Copy constructor called\n";
    }

    // Setters 
    //  used to set the private properties
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setMarks(float marks) {
        this->marks = marks;
    }

    //  Getters 
    // used to get the private properties
    string getName() {
        return this->name;
    }

    int getAge() {
        return this->age;
    }

    float getMarks() {
        return this->marks;
    }

    // Method (functions)
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    // Creating object using default constructor
    Student s1; // default constructor is called and propties are assigned with defalut values
    s1.setName("Gopi");  // setting the private propeties
    s1.setAge(18);
    s1.setMarks(95.5);
    s1.display();  

    // Creating object using parameterized constructor
    Student s2("Ravi", 19, 88.0);
    s2.display();

    //  Creating object using copy constructor
    Student s3 = s2;
    s3.display();

    return 0;
}
