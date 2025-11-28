#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;

public:
    // Function to input employee details
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate salary
    void calculateSalary() {
        hra = basicSalary * 0.10; // HRA = 10% of basic
        da = basicSalary * 0.05;  // DA = 5% of basic
        grossSalary = basicSalary + hra + da;
    }

    // Function to display employee salary details
    void displayDetails() {
        cout << "\n--- Employee Salary Details ---\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Name       : " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA        : " << hra << endl;
        cout << "DA         : " << da << endl;
        cout << "Gro
