#include <iostream>
#include <string>
using namespace std;
class Car{
   
    int carNum;
    string name;
    int mYear;
    public:
    
    void insert_details(){
        cout<<"Enter the car number: "<<endl;
        cin>>carNum;
        cout<<"Enter Car name: "<<endl;
        cin>>name;
        cout<<"Enter the model year: "<<endl;
        cin>>mYear;
        cout<<"Data inserted Successfully\n";

    }
    void show_details(){
        cout<<"Car number: "<<carNum<<endl;
        cout<<"Car name: "<<name<<endl;
        cout<<"Model Year: "<<mYear<<endl;
    }
};

int main(){
    Car c1;
    c1.insert_details();
    c1.show_details();
    return 0;
}