#include <iostream>
using namespace std;

class ServiceManager;
class VehicleService{
    string vnum;
    string owner;
    bool serviceDue;
    int lServKM;
    public:
    VehicleService(){
        cout<<"enter the vehicle number: ";
        cin>>vnum;
        cout<<"Enter the owner's name: ";
        cin>>owner;
        cout<<"Enter the service due status(0 for completed/1 for peding): ";
        cin>>serviceDue;
        cout<<"Enter the last service kilometer: ";
        cin>>lServKM;

    }
    friend class ServiceManager;
};
class ServiceManager{
    public:
    void displayDetails(VehicleService &v){
        cout<<"Vehicle number: "<<v.vnum<<endl;
        cout<<"Vehicle's owner: "<<v.owner<<endl;
        cout<<"Service due: "<<(bool)v.serviceDue<<endl;
        cout<<"Last service kilometers: "<<v.lServKM<<endl;
    }
    void markServ(VehicleService &v){
        v.serviceDue=0;
        cout<<"service completed successfully"<<endl;
    }
    void updateLSKM(VehicleService &v){
        int lskm;
        cout<<"Enter the last service kilometer: ";
        cin>>lskm;
        v.lServKM=lskm;
        cout<<"Updated successfully"<<endl;
    }
    void checkServ(VehicleService &v){
        if(v.serviceDue || v.lServKM>1000){
            v.serviceDue=true;
            cout<<"Service is required"<<endl;
        }
        else{
            cout<<"Service is not required: "<<endl;
        }
    }
};
int main(){
    VehicleService v1;
    ServiceManager sm;
    sm.displayDetails(v1);
    sm.markServ(v1);
    sm.updateLSKM(v1);
    sm.checkServ(v1);
    return 0;
}