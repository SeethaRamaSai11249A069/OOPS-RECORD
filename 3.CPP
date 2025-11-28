#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float basicSalary;
    float hra, da, grossSalary;

public:
    // Function to input employee details
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        calculateSalary();
    }

    // Salary calculation
    void calculateSalary() {
        hra = basicSalary * 0.10; // 10% HRA
        da  = basicSalary * 0.20; // 20% DA
        grossSalary = basicSalary + hra + da;
    }

    // Function to display employee data
    void display() {
        cout << "\n----- Employee Account Details -----\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee e1;
    e1.getDetails();
    e1.display();
    return 0;
}
