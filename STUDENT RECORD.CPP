#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks[3];
    float total;
    float percentage;

public:
    // Function to input student details
    void getDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter marks for 3 subjects:
