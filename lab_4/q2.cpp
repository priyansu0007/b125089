#include <iostream>
using namespace std;

class UserAccount{
    string username;
    size_t loginAttempts;
    string accountStatus;
    public:
    UserAccount(){
        cout<<"Enter the usename: ";
        cin>>username;
        loginAttempts=0;
        accountStatus="Account Active";
    }
    void login(){
        cout<<"Unsuccessful login"<<endl;
        loginAttempts++;}
    friend void checkAccount(UserAccount obj);
};
void checkAccount(UserAccount a){
    if(a.loginAttempts>=3)a.accountStatus="Account Locked";
    cout<<"Username: "<<a.username<<endl;
    cout<<"Unsuccessful logins: "<<a.loginAttempts<<endl;

    cout<<"Account status: "<<a.accountStatus<<endl;
}
int main(){
    UserAccount a1;
    checkAccount(a1);
    a1.login();
    a1.login();
    a1.login();
    checkAccount(a1);

    return 0;

}