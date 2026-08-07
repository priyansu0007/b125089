#include <iostream>
#include <string>
using namespace std;

class WaterBill {
    int consumerNo;
    string consumerName;
    double consumption; 
public:
    void getDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Water Consumption (in litres): ";
        cin >> consumption;
    }

    double calculateBill() const {
        double bill = 0.0;
        double rem = consumption;

        if (rem > 1000) {
            bill += (rem - 1000) * 5; 
            rem = 1000;
        }
        if (rem > 500) {
            bill += (rem - 500) * 3;  
            rem = 500;
        }
        if (rem > 0) {
            bill += rem * 2;          
        }

        return bill;
    }

    void displayBill() const {
        cout << "\n===============================" << endl;
        cout << "        WATER BILL REPORT      " << endl;
        cout << "===============================" << endl;
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Consumption     : " << consumption << " Litres" << endl;
        cout << "-------------------------------" << endl;
        cout << "Total Bill      : Rs. " << calculateBill() << endl;
        cout << "===============================" << endl;
    }
};

int main() {
    WaterBill bill1;
    bill1.getDetails();
    bill1.displayBill();
    return 0;
}