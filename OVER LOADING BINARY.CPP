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

    // Function to display value
    void display() {
        cout << "Value = " << value << endl;
    }

    // Overloading Binary + Operator
    Number operator+(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    cout << "Number 1: ";
    n1.display();
    cout << "Number 2: ";
    n2.display();

    n3 = n1 + n2; // Using overloaded + operator

    cout << "After Addition (n1 + n2): ";
    n3.display();

    return 0;
}
