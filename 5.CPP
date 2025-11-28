#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    void inputDetails() {
        cout << "\nEnter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayDetails() {
        cout << "\nBook ID: " << bookID
             << "\nTitle: " << title
             << "\nAuthor: " << author
             << "\nPrice: " << price << endl;
    }

    int getID() {
        return bookID;
    }
};

int main() {
    Book library[100];
    int choice, count = 0;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book by ID";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (count < 100) {
                library[coun]()
