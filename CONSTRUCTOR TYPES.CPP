#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor Called\n";
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called\n";
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor Called\n";
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1; // Default constructor
    s1.display();

    Student s2(101, "Sai"); // Parameterized constructor
    s2.display();

    Student s3(s2); // Copy constructor
    s3.display();

    return 0;
}
