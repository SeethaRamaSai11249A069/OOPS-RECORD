#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Function to accept value
    void getData() {
        cout << "Enter a number: ";
        cin >> value;
    }

    // Overloading Unary ++ Operator
    void operator++() {
        value = value + 1;
    }

    // Display function
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n;

    n.getData();
    cout << "Before increment: ";
    n.display();

    ++n; // Calling overloaded operator

    cout << "After increment: ";
    n.display();

    return 0;
}
