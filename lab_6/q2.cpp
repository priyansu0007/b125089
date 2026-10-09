#include <iostream>
using namespace std;


class Duration {
private:
    int hours;
    int minutes;

public:
    Duration(int h=0,int m=0){
        hours=h;
        minutes=m;
    }

    Duration operator+(Duration& other){
        int totalMinutes=minutes+other.minutes;
        int totalHours =hours+other.hours+(totalMinutes/60);
        totalMinutes %=60;
        return Duration(totalHours,totalMinutes);
    }

    void display(){
        cout<<hours<<" hrs "<<minutes<<" mins";
    }
};

int main() {
    Duration d1(2,45);
    Duration d2(1,35);
    Duration result=d1+d2;

    cout<<"Duration 1: "; 
    d1.display(); 
    cout<<"\n";
    cout<<"Duration 2: "; 
    d2.display();
    cout<<"\n";
    cout<<"Total Duration: "; 
    result.display(); 
    cout <<"\n";
    return 0;
}