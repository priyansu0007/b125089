#include <iostream>
using namespace std;

long long  convert(float km){
    return km*1000;
}
long long convert(long long meter){
    return meter*100;
}
long long convert(int km){
    return km*1000;
}

int main(){
    int km;
    float fKm;
    long long meter;
    cout<<"Enter the distance in km, floating point km and meter: ";
    cin>>km>>fKm>>meter;
    cout<<"KM->Meter: "<<convert(km)<<"\nFloating point KM->meter: "<<convert(fKm)<<"\nMeter->Cm: "<<convert(meter)<<endl;
    return 0;
}