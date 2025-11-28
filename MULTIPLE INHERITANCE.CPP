#include <iostream>
using namespace std;

// Base class 1
class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base class 2
class Job {
