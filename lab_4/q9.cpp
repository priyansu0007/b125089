#include <iostream>
using namespace std;

class WalletManager;
class DigitalWallet{
    string username;
    int wbal;
    bool wstat;
    public:
    DigitalWallet(){
        cout<<"Enter the username: ";
        cin>>username;
        cout<<"Enter the wallet balance: ";
        cin>>wbal;
        cout<<"Enter the wallet status(0 for on/1 for off): ";
        cin>>wstat;
    }
    friend class WalletManager;
};
class WalletManager{
    public:
    void displayDetails(DigitalWallet &w){
        cout<<"Username: "<<w.username<<endl;
        cout<<"Wallet balance: "<<w.wbal<<endl;
        cout<<"Wallet enabled: "<<(bool)w.wstat<<endl;
    }
    void addMoney(DigitalWallet &w){
        int amt;
        cout<<"Enter the amount to add: ";
        cin>>amt;
        w.wbal+=amt;
        cout<<"Balance updated successfully"<<endl;
    }
    void dedMoney(DigitalWallet &w){
        if(w.wbal>3000){
            w.wbal-=500;
            cout<<"Balance deducted successfully"<<endl;
        }
        else cout<<"Insufficient balance"<<endl;
    }
};
int main(){
    DigitalWallet w;
    WalletManager wm;
    wm.displayDetails(w);
    wm.addMoney(w);
    wm.dedMoney(w);
    return 0;
}