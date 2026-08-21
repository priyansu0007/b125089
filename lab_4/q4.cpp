#include <iostream>
using namespace std;

class ElectricMeter{
    string mnum;
    string cname;
    float units;
    public:
    ElectricMeter(){
        cout<<"Enter the meter number: ";
        cin>>mnum;
        cout<<"Enter the consumer number: ";
        cin>>cname;
        cout<<"Enter the units consumed: ";
        cin>>units;
    }
    friend void checkUsage(ElectricMeter &m1);
};
void checkUsage(ElectricMeter &m1){
    string category;
    if(m1.units>300)category="High Usage";
    else if(m1.units>100)category="Moderate Usage";
    else category="Low Usage";

    cout<<"\nConsumer Name: "<<m1.cname<<endl;
    cout<<"Meter number: "<<m1.mnum<<endl;
    cout<<"Units consumed: "<<m1.units<<endl;
    cout<<"Category: "<<category<<endl;
}
int main(){
    ElectricMeter m1;
    checkUsage(m1);
    return 0;
}