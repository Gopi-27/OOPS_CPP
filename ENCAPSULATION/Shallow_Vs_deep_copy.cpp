// SHALLOW COPY
//A shallow copy copies all member values as they are, including pointer addresses. 
//It does not create a new copy of the data that the pointer points to — both the original and copied objects will point to the same memory location.
#include <iostream>
using namespace std;

class Sample {
public:
    int* ptr;
    
    Sample(int val) {
        ptr = new int(val);
    }

    // Default copy constructor -> shallow copy
    void show() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1;  // Shallow copy

    *obj2.ptr = 20;

    obj1.show();  // Will show 20, because both share same memory
    obj2.show();  // Will also show 20

    return 0;
}

// DEEP COPY
// A deep copy creates a new copy of the data the pointer points to. So both objects manage independent memory.
// It is implemented by writing a custom copy constructor and assignment operator.

#include <iostream>
using namespace std;

class Sample {
public:
    int* ptr;

    Sample(int val) {
        ptr = new int(val);
    }

    // Deep copy constructor
    Sample(const Sample& other) {
        ptr = new int(*other.ptr);  // Allocate new memory and copy the value
    }

    void show() {
        cout << "Value: " << *ptr << endl;
    }

    ~Sample() {
        delete ptr;
    }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1;  // Deep copy

    *obj2.ptr = 20;

    obj1.show();  // Will show 10
    obj2.show();  // Will show 20

    return 0;
}
