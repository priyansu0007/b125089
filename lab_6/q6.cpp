#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d=1,int m=1,int y=2000){day=d;month=m;year=y;}

    bool operator==(Date& other) {
        return (day==other.day && month==other.month && year==other.year);
    }

    bool operator!=(Date& other){
        return !(*this == other);
    }

    void display(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
};

int main() {
    Date d1(9,10,2026);
    Date d2(9,10,2026);
    Date d3(15,8,2025);

    cout<<"Date 1: "; 
    d1.display();
    cout<<"\n";
    cout<<"Date 2: "; 
    d2.display(); 
    cout<<"\n";
    cout<<"Date 3: "; 
    d3.display(); 
    cout<<"\n\n";

    cout<<"d1==d2: "<<((d1==d2) ? "True" : "False")<<"\n";
    cout<<"d1!=d3: "<<((d1!=d3) ? "True" : "False")<<"\n";
    cout<<"d1==d3: "<<((d1==d3) ? "True" : "False")<<"\n";

    return 0;
}