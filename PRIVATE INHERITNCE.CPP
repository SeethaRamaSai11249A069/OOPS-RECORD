#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class with private inheritance
class Car : private Vehicle {
public:
    string model;

    void setDetails(string b, string m) {
        brand = b;    // Accessible here because inherited privately
        model = m;
    }

    void showDetails() {
        showBrand();  // Base class function accessible p
