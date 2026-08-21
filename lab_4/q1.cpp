#include <iostream>
using namespace std;

class Weather{
    string cname;
    float temp;
    string condn;
    public:
    Weather(){
        cout<<"Enter city name: ";
        cin>>cname;
        cout<<"Enter the temperature in Celsius: ";
        cin>>temp;
    }
    friend void generateReport(Weather obj);

};
void generateReport(Weather obj){
    if(obj.temp>35)obj.condn="Very hot";
    else if(obj.temp>20)obj.condn="Pleasant";
    else obj.condn="Cool";

    cout<<"==============================\n";
    cout<<"Weather Report"<<endl;
    cout<<"==============================\n";
    cout<<"City name: "<<obj.cname<<endl;
    cout<<"Temperature(celsius): "<<obj.temp<<endl;
    cout<<"Condition: "<<obj.condn<<endl;
     cout<<"==============================\n";
}
int main(){
    Weather report;
    generateReport(report);
    return 0;
}