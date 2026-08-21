#include <iostream>
using namespace std;


class PrinterManager;
class Printer{
    string pname;
    int pages;
    float ilvl;
    string pstat;
    public:
    Printer(){
        cout<<"Enter the printer name: ";
        cin>>pname;
        cout<<"Enter the total pages printed: ";
        cin>>pages;
        cout<<"Enter the ink level: ";
        cin>>ilvl;
        cout<<"Enter the power status(on/off): ";
        cin>> pstat;
    }
    friend class PrinterManager;

};
class PrinterManager{
    public:
    void displayDetails(Printer& p1){
        cout<<"======================================\n";
        cout<<"Printer name: "<<p1.pname<<endl;
        cout<<"Total pages printed: "<<p1.pages<<endl;
        cout<<"Ink level: "<<p1.ilvl<<endl;
        cout<<"Power status: "<<p1.pstat<<endl;
        cout<<"======================================\n";
    }
    void turnOff(Printer &p){
        if(p.pstat=="off")cout<<"Printer is already off"<<endl;
        else{
            p.pstat="off";
            cout<<"Printer turned off successfully"<<endl;
        }
    }
    void turnOn(Printer &p){
        if(p.pstat=="on")cout<<"Printer is already on"<<endl;
        else{
            p.pstat="on";
            cout<<"Printer turned on successfully"<<endl;
        }
    }
    void checkInk(Printer &p){cout<<"Ink level: "<<p.ilvl<<endl;}
    void resetPage(Printer &p){p.pages=0;cout<<"Page count is now reset"<<endl;}
};

int main(){
    Printer p1;
    PrinterManager pm;
    pm.displayDetails(p1);
    pm.turnOff(p1);
    pm.turnOn(p1);
    pm.checkInk(p1);
    pm.resetPage(p1);

    return 0;


}