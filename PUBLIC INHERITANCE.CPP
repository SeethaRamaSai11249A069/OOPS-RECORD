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

// Derived class with public inheritance
class Car : public Vehicle {
public:
    string model;

    void showDetails() {
        cout << "Model: " << model << endl;
    }
};

int main() {
    Car c;

    // Access base class public member
    c.brand = "Toyota";
    c.model = "Corolla";

    cout <<
