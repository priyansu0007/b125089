#include <iostream>
using namespace std;

class Ticket{
    protected:
    string name;
    double km;
    public:
        Ticket(string s="",double k=0.0){name=s;km=k;}
};

class RailwayTicket: public Ticket{
    private:
        double farePerKm;
    public:
        RailwayTicket(string s,double dis,double rate):Ticket(s,dis){
            farePerKm=rate;
        }
        double calculateFare() {
                double totalFare=km * farePerKm;
                if (km>300.0) {
                    totalFare=totalFare * 0.90;
                }
                return totalFare;
            }
            void displayDetails() {
                    cout<<"--- Railway Ticket Details ---\n";
                    cout<<"Passenger Name : "<<name<<"\n";
                    cout<<"Distance (km)  : "<<km<<" km\n";
                    cout<<"Fare per km    : Rs. "<<farePerKm<<"\n";
                    if (km>300.0) {
                        cout<<"Discount       : 10% applied (Distance > 300 km)\n";
                    } else {
                        cout<<"Discount       : None\n";
                    }
                    cout<<"Final Fare     : Rs. "<<calculateFare()<<"\n\n";
                }

};

int main() {
    RailwayTicket t1("Rahul Sharma",250.0,1.50);
    RailwayTicket t2("Priya Verma",450.0,1.50);

    t1.displayDetails();
    t2.displayDetails();

    return 0;
}
