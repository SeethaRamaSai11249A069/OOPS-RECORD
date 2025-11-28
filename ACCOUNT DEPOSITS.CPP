#include <iostream>
using namespace std;

class Account {
private:
    int accNumber;
    string name;
    double balance;

public:
    // Constructor to initialize account
    Account() {
        accNumber = 0;
        name = "Unknown";
        balance = 0.0;
    }

    // Function to create account
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNumber;
        cout << "Enter Account Holder Name: ";
        cin >> name;
        cout << "Enter Initial Balance
