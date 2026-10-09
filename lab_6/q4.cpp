#include <iostream>
using namespace std;


class AccountBalance {
private:
    double balance;
public:
    AccountBalance(double b = 0.0){balance=b;}

    AccountBalance operator-(){
        return AccountBalance(-balance);
    }

    void display(){
        cout<<"Balance: "<<balance;
    }
};

int main() {
    AccountBalance obj(1500.75);
    AccountBalance obj2=-obj;

    cout<<"Original object: "; 
    obj.display(); 
    cout<<"\n";
    cout<<"negative object:  "; 
    obj2.display(); 
    cout<<"\n";
    cout<<"Original object after operation: "; 
    obj.display(); 
    cout<<"\n";

    return 0;
}