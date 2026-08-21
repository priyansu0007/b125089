#include <iostream>
#include <string>
using namespace std;

class AttendanceManager;

class Classroom {
    string cname;
    int tstud;
    int present;
    bool astat;

public:
    Classroom() {
        cout << "Enter the classroom name: ";
        cin >> cname;
        cout << "Enter the total students: ";
        cin >> tstud;
        cout << "Enter the number of present students: ";
        cin >> present;
        cout << "Enter the attendance status (1 for Completed, 0 for Pending): ";
        cin >> astat;
    }

    friend class AttendanceManager;
};

class AttendanceManager {
public:
    void displayDetails(const Classroom &c) {
        cout << "\n--- Classroom Details ---" << endl;
        cout << "Classroom Name: " << c.cname << endl;
        cout << "Total Students: " << c.tstud << endl;
        cout << "Present Students: " << c.present << endl;
        cout << "Attendance Status: " << (c.astat ? "Completed" : "Pending") << endl;
    }

    void updatePresent(Classroom &c) {
        int newPresent;
        cout << "\nEnter updated number of present students: ";
        cin >> newPresent;
        if (newPresent <= c.tstud && newPresent >= 0) {
            c.present = newPresent;
            cout << "Present students count updated successfully." << endl;
        } else {
            cout << "Invalid number of present students." << endl;
        }
    }

    void markComplete(Classroom &c) {
        c.astat = true;
        cout << "\nAttendance marked as completed." << endl;
    }

    void displayStatus(const Classroom &c) {
        cout << "\nAttendance Status: " << (c.astat ? "Completed" : "Not Completed (Pending)") << endl;
    }

    void displayAbsent(const Classroom &c) {
        int absent = c.tstud - c.present;
        cout << "\nNumber of Absent Students: " << absent << endl;
    }
};

int main() {
    Classroom myClass;
    AttendanceManager manager;

    manager.displayDetails(myClass);
    manager.displayAbsent(myClass);
    manager.updatePresent(myClass);
    manager.markComplete(myClass);
    manager.displayStatus(myClass);
    manager.displayDetails(myClass);

    return 0;
}