#include <iostream>
#include <memory>
using namespace std;

class Drone{
    int dId;
    int bp;
    float fHours;
    public:
    Drone(){
        cout<<"Enter the drone id: ";
        cin>>dId;
        cout<<"Enter the battery percentage: ";
        cin>>bp;
        cout<<"Enter the flight hours: ";
        cin>>fHours;
    }
    void update(int perc){
        bp=perc;
        cout<<"battery percentage updated successfully"<<endl;
    }
    void update(int perc,float fh){
        bp=perc;
        fHours=fh;
        cout<<"Both battery percentage and flight hours updated successfully"<<endl;
    }
    friend void compareBattery(Drone& d1,Drone& d2);
};

void compareBattery(Drone& d1,Drone& d2){
    if(d1.bp>d2.bp)cout<<"Drone 1 has more battery"<<endl;
    else if(d1.bp==d2.bp)cout<<"Both drones have equal battery"<<endl;
    else cout<<"Drone 2 has more battery"<<endl;
}

int main(){
    Drone* d1=new Drone;
    Drone* d2=new Drone;

    d1->update(32);
    d2->update(33,24);
    compareBattery(*d1,*d2);
    
    delete d1;
    delete d2;

    return 0;
}