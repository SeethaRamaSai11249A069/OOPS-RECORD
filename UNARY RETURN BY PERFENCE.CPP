#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Unary ++ Operator Overloading (Return by Reference)
    Number& operator++() {
        value++;  // Increment
        return *this;  // Return by reference
    }

    // Display function
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(5);

    cout << "Before Increment:" << endl;
    n1.display();

    ++n1;  // Unary ++ operator

    cout << "After
