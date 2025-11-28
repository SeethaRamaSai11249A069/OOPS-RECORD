#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;  // Pointer to dynamically allocate memory
    int length;

public:
    // Constructor
    MyString(const char* s = "") {
        length = strlen(s);
        str = new char[length + 1];  // +1 for null terminator
        strcpy(str, s);
    }

    // Copy Constructor
    MyString(const MyString& s) {
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
    }

    // Display Function
    void display() {
        cout << "String: " << str << endl;
    }

    // Concatenate Function
    void conc
