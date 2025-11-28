#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    int empID;
    string name;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
    }

    void displayEmployeeDetails() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << name << endl;
    }
};

// Derived class
class Salary : public Employee {
private:
    float basicSalary;
    float hra;
    float grossSalary;

public:
    void getSalaryDetails() {
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        hra = basicSalary * 0.10; // 10% HRA
        grossSalary = basicSalary + hra;
    }

    void displaySalaryDetails() {
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Salary s;

    cout << "--- Enter Employee Details ---\n";
    s.getEmployeeDetails();

    cout << "\n--- Enter Salary Details ---\n";
    s.getSalaryDetails();

    cout << "\n--- Employee Information ---\n";
    s.displayEmployeeDetails();
    s.displaySalaryDetails();

    return 0;
}
