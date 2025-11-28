#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void area() {
        cout << "Area of shape is unknown." << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    void getDimensions() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    void area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    void getDimensions() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    cout << "--- Rectangle ---\n";
    r.getDimensions();
    r.area();

    cout << "\n--- Circle ---\n";
    c.getDimensions();
    c.area();

    return 0;
}
