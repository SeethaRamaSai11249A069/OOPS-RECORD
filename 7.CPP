#include <iostream>
using namespace std;

class Patient {
private:
    int patientID;
    string name;
    int age;
    string disease;

public:
    // Function to input patient details
    void getDetails() {
        cout << "Enter Patient ID: ";
        cin >> patientID;
        cout << "Enter Patient Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Disease: ";
        cin >> disease;
    }

    // Function to display patient details
    void displayDetails() {
        cout << "\n----- Patient Details -----\n";
        cout << "Patient ID : " << patientID << endl;
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Disease    : " << disease << endl;
    }
};

int main() {
    Patient p;
    p.getDetails();
    p.displayDetails();
    return 0;
}
