#include <iostream>
#include <string>
using namespace std;

class HostelFee {
    string name;
    int id;
    int fee;
    int months;
    bool delayed;

public:
    HostelFee() {
        fee = 0;
        months = 0;
        delayed = false;
    }

    void getDetails() {
        char isDelayed;
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the student id: ";
        cin >> id;
        cout << "Enter the monthly fee: ";
        cin >> fee;
        cout << "Enter the number of months: ";
        cin >> months;
        cout << "Is payment delayed? (y/n): ";
        cin >> isDelayed;

        delayed = (isDelayed == 'y' || isDelayed == 'Y');
    }

    int calcTotal() const {
        int total = fee * months;
        if (delayed) {
            total += 500; // Add fine if delayed
        }
        return total;
    }

    void displayDetails() const {
        cout << "\n--- Fee Statement ---" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Base Amount: " << fee * months << endl;
        if (delayed) {
            cout << "Late Fine Applied: 500" << endl;
        }
        cout << "Final Total Amount: " << calcTotal() << endl;
    }
};

int main() {
    HostelFee h1;
    h1.getDetails();
    h1.displayDetails();
    return 0;
}