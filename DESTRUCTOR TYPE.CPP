#include <iostream>
using namespace std;
class Implicit {
public:
    int x;
    
};


class Explicit {
public:
    ~Explicit() {
        cout << "Explicit Destructor Called" << endl;
    }
};


class Parent {
public:
    virtual ~Parent() {
        cout << "Parent Virtual Destructor Called" << endl;
    }
};

class Child : public Parent {
public:
    ~Child() {
        cout << "Child Destructor Called" << endl;
    }
};


class Abstract {
public:
    virtual ~Abstract() = 0; // Pure
