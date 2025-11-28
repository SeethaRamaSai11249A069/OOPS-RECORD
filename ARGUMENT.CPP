#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    // Function to input data
    void getData() {
        cout << "Enter distance in meters: ";
        cin >> meters;
    }

    // Function that takes an object as argument
    void addDistance(Distance d1, Distance d2) {
        meters = d1.meters + d2.meters;
    }

    // Display result
    void display() {
        cout << "Total Distance: " << meters << " meters" << endl;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter for object d1:\n";
    d1.getData
