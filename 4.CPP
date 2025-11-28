#include <iostream>
using namespace std;

class Car {
private:
    int carID;
    string carName;
    string model;
    float price;

public:
    void inputDetails() {
        cout << "\nEnter Car ID: ";
        cin >> carID;
        cout << "Enter Car Name: ";
        cin >> carName;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayDetails() {
        cout << "\nCar ID: " << carID
             << "\nCar Name: " << carName
             << "\nModel: " << model
             << "\nPrice: " << price << endl;
    }

    int getID() {
        return carID;
    }
};

int main() {
    Car showroom[100];
    int choice, count = 0;

    do {
        cout << "\n===== CAR SHOWROOM MANAGEMENT =====";
        cout << "\n1. Add Car";
        cout << "\n2. Display All Cars";
        cout << "\n3. Search Car by ID";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (count < 100) {
                showroom[count].inputDetails();
                count++;
                cout << "\nCar added successfully!\n";
            } else {
                cout << "\nShowroom Full!" << endl;
            }
            break;

        case 2:
            if (count == 0)
                cout << "\nNo cars available!" << endl;
            else {
                cout << "\n--- CAR LIST ---\n";
                for (int i = 0; i < count; i++) {
