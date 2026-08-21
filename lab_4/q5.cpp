#include <iostream>
using namespace std;

class EventParticipant{
    string pName;
    int age;
    string regStat;
    public:
    EventParticipant(){
        cout<<"Enter the participant's name: ";
        cin>>pName;
        cout<<"enter the age of the participant: ";
        cin>>age;
        cout<<"Enter the registration status(active/inactive): ";
        cin>>regStat;
    }
    friend void verifyParticipant(EventParticipant &p1);
};
void verifyParticipant(EventParticipant &p1){
    string eligibility="Not Eligible";
    if(p1.age>=18 && p1.regStat=="active")eligibility="Eligible";
    cout<<"Participant's name: "<<p1.pName<<endl;
    cout<<"participant's age: "<<p1.age<<endl;
    cout<<"Participant's registration status: "<<p1.regStat<<endl;
    cout<<"Eligibility: "<<eligibility<<endl;

}

int main(){
    EventParticipant p1;
    verifyParticipant(p1);
    return 0;
}