#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float salary;

public:
    // Function to enter employee data
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee data
    void displayDetails() {
        cout << "\n----- Employee Details -----\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.g
