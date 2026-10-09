#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
public:
    Temperature(double c=0.0){celsius=c;}

    bool operator>( Temperature& other){
        return celsius>other.celsius;
    }
    bool operator<( Temperature& other){
        return celsius < other.celsius;
    }
    Temperature operator-(){
        return Temperature(-celsius);
    }
    void display(){
        cout<<celsius<<" °C";
    }
};

int main() {
    Temperature t1(24.5);
    Temperature t2(18.0);

    cout<<"Temperature 1: "; 
    t1.display(); 
    cout<<"\n";
    
    cout<<"Temperature 2: "; 
    t2.display(); 
    cout<<"\n";

    cout<<"t1>t2: "<<((t1>t2) ? "True" : "False")<<"\n";
    cout<<"t1 < t2: "<<((t1 < t2) ? "True" : "False")<<"\n";

    Temperature negT1=-t1;
    cout<<"Negated Temperature 1: "; 
    negT1.display(); 
    cout<<"\n";

    return 0;
}