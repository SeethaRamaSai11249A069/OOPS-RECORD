#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    // Constructor
    Demo(int v) {
        value = v;
        cout << "Constructor called. Value = " << value << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called. Value = " << value << endl;
    }
};

int main() {
    Demo obj1(10);
    Demo obj2(20);

    cout << "Program is ending..." << endl;

    return 0;
}
