#include <iostream>
using namespace std;

// Base class
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

// Derived class 1
class Employee : public Person {
protected:
    int empID;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
    }
};

// Derived class 2 (inherits Employee)
class Salary : public Employee {
private:
    float basicSalary;
    float grossSalary;

public:
    void getSalaryDetails() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        grossSalary = basicSalary + (basicSalary * 0.10); // 10% HRA
    }
