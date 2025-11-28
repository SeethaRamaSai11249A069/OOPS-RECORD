#include <iostream>
using namespace std;

class Project {
private:
    int projectID;
    string projectName;
    string location;
    float cost;

public:
    void addProject() {
        cout << "\nEnter Project ID: ";
        cin >> projectID;
        cout << "Enter Project Name: ";
        cin >> projectName;
        cout << "Enter Project Location: ";
        cin >> location;
        cout << "Enter Estimated Cost: ";
        cin >> cost;
    }

    void showProject() {
        cout << "\n--- Project Details ---\n";
        cout << "Project ID       : " << projectID << endl;
        cout << "Project Name     : " << projectName << endl;
        cout << "Location         : " << location << endl;
        cout << "Estimated Cost   : " << cost << endl;
    }

    int getID() {
        return projectID;
    }
};

int main() {
    Project projects[100];
    int choice, count = 0;

    do {
        cout << "\n===== CONSTRUCTION MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Project";
        cout << "\n2. Display All Projects";
        cout << "\n3. Search Project by ID";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if (count < 100) {
                    projects[count].addProject();
                    count++;
                    cout <<
