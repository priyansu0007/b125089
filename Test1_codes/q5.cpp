#include <iostream>
#include <memory>
using namespace std;

class Wallet{
    int wId;
    float cBal;
    float* amts;
    int ptr;
    public:
    Wallet(){
        cout<<"Enter the wallet id: ";
        cin>>wId;
        cout<<"Enter the current balance: ";
        cin>>cBal;
        amts=new float[10];
        ptr=0;
    }
    ~Wallet(){
        delete[] amts;
    }
    void transaction(float amt){
        if(ptr>=10){cout<<"Transaction history full"<<endl;return;}
        amts[ptr]=amt;
        ptr++;
        cBal+=amt;
    }
    void transaction(float amt,char c){
        if(ptr>=10){cout<<"Transaction history full"<<endl;return;}
        if(c=='D'){
            amts[ptr]=amt;
        ptr++;
        cBal+=amt;
        }
        else if(c=='W'){
            amts[ptr]=-1*amt;
        ptr++;
        cBal-=amt;
        }
    }
    friend void compare(Wallet& w1,Wallet& w2);
};

void compare(Wallet& w1,Wallet& w2){
    if(w1.cBal>w2.cBal){
        cout<<"wallet 1 has more balance"<<endl;
    }
    else if(w1.cBal==w2.cBal){
        cout<<"Both have equal balance"<<endl;
    }
    else{
        cout<<"wallet 2 has more balance"<<endl;
    }
}
int main(){
    Wallet* w1=new Wallet;
    Wallet* w2=new Wallet;

    w1->transaction(300.0);
    w1->transaction(300,'D');
    compare(*w1,*w2);

    delete w1;
    delete w2;
}