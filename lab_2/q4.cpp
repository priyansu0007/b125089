#include <iostream>
using namespace std;

class HotelRoom{
    int roomNo;
    string guestName;
    int daysStayed;
    int dayCost;
    
    public:
    void getDetails(){
        cout<<"Enter your name: ";
        cin>>guestName;
        cout<<"Enter your room number: ";
        cin>>roomNo;
        cout<<"Data entered successfully"<<endl;
    }
    int totalRent(){
        cout<<"Enter  the number of days stayed: ";
        cin>>daysStayed;
        cout<<"Enter the cost per day: ";
        cin>>dayCost;
        cout<<"Calculating  your total rent...."<<endl;
        return dayCost*daysStayed;
    }
    void displayDetails(){
        int rent=totalRent();
        cout<<"Guest Name: "<<guestName<<endl<<"Room number: "<<roomNo<<endl;
        cout<<"Days Stayed: "<<daysStayed<<endl<<"Cost per day: "<<dayCost<<endl;
        cout<<"Total rent: "<<rent<<endl;
    }

};
int main(){
    HotelRoom room1;
    room1.getDetails();
    room1.displayDetails();
    
    return 0;

}