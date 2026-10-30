#include <iostream>
using namespace std;

class ElectricityPlan{
public:
    virtual double calculateBill(double units)=0;
    virtual ~ElectricityPlan() {}
};

class ResidentialPlan : public ElectricityPlan{
public:
    double calculateBill(double units){
        if (units<=100.0) {
            return units*4.0;
        }
        return (100.0*4.0)+((units-100.0)*6.0);
    }
};

class CommercialPlan : public ElectricityPlan{
public:
    double calculateBill(double units){
        return units*7.0;
    }
};

int main() {
    ResidentialPlan resPlan;
    CommercialPlan comPlan;
    ElectricityPlan* planPtr=NULL;
    double units=250.0;

    cout<<"Energy Units Consumed: "<<units<<"\n\n";
    planPtr = &resPlan;
    cout<<"Residential Plan Bill : Rs. "<<planPtr->calculateBill(units)<<"\n";
    planPtr = &comPlan;
    cout<<"Commercial Plan Bill  : Rs. "<<planPtr->calculateBill(units)<<"\n";

    return 0;
}
