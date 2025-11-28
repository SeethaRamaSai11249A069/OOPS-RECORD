#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    double p = 5.5, q = 3.3;

    cout << "Addition of integers: " << add(x, y) << endl;
    cout << "Addition of doubles : "
