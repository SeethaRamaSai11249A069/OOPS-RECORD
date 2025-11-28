#include <iostream>
using namespace std;

class Sample {
private:
    int value;
    int* ptr;

public:
    // Constructor
    Sample(int v = 0) {
        value = v;
        ptr = new int;
        *ptr = v;
    }

    // Copy Constructor
    Sample(const Sample &s) {
        value = s.value;
        ptr = new int;
        *ptr = *(s.ptr);
    }

    // Assignment Operator Overloading
    Sample& operator=(const Sample &s) {
        if (this != &s) { // Avoid self-assignment
            value = s.value;
            *ptr = *(s.ptr);
        }
        return *this;
    }

    // Display function
    void display() {
        cout << "Value = " << value << ", Ptr Value = " << *ptr << endl;
    }

    // Destructor
    ~Sample() {
        delete ptr;
    }
};

int main() {
    Sample s1(10), s2, s3;

    cout << "Initial values:\n";
    s1.display();
    s2.display();

    s2 = s1; // Using overloaded assignment operator
    cout << "\nAfter Assignment (s2 = s1):\n";
    s2.display();

    // Another assignment
    s3 = s2;
    cout << "\nAfter Assignment (s3 = s2):\n";
    s3.display();

    return 0;
}
