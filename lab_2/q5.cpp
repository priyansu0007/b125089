#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
    string mobileNumber;
    string name;
    double balance;

public:
    MobileRecharge() {
        balance = 0.0;
    }

    void getDetails() {
        cout << "Enter the name of the customer: ";
        cin >> name;
        cout << "Enter the mobile number: ";
        cin >> mobileNumber;
    }

    void addBalance() {
        double amt;
        cout << "Enter the amount to add to balance: ";
        cin >> amt;
        balance += amt;
    }

    void rechargePlan() {
        if (balance <= 0) {
            cout << "Insufficient balance!\nPlease add balance.\n";
            return;
        }
        
        double amt;
        cout << "Enter your plan amount: ";
        cin >> amt;
        
        if (amt > balance) {
            cout << "Insufficient balance!\nPlease add balance....\n";
            return;
        }
        
        balance -= amt;
        cout << "Recharge successful!\n";
    }

    void displayBalance() const {
        cout << "Your current balance is: " << balance << endl;
    }
};

int main() {
    MobileRecharge n1;
    n1.getDetails();
    n1.addBalance();
    n1.rechargePlan();
    n1.displayBalance();
    return 0;
}