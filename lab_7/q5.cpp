#include <iostream>
using namespace std;

class Sensor{
protected:
    string sensorID;
public:
    Sensor(string id="") {
        sensorID=id;
    }
};

class Temperature : virtual public Sensor{
protected:
    double temperatureCelsius;

public:
    Temperature(string id,double temp) : Sensor(id){
        temperatureCelsius=temp;
    }
};

class Humidity : virtual public Sensor {
protected:
    double relativeHumidity;
public:
    Humidity(string id,double hum) : Sensor(id) {
        relativeHumidity=hum;
    }
};

class FarmMonitor : public Temperature,public Humidity {
public:
    FarmMonitor(string id,double temp,double hum)
        : Sensor(id),Temperature(id,temp),Humidity(id,hum) {}

    void displayInfo() {
        cout<<"=== Farm Monitor Sensor: "<<sensorID<<" ===\n";
        cout<<"Temperature : "<<temperatureCelsius<<" deg C\n";
        cout<<"Humidity    : "<<relativeHumidity<<" %\n";

        if (temperatureCelsius > 35.0 || relativeHumidity > 80.0) {
            cout<<"WARNING ISSUED:\n";
            if (temperatureCelsius > 35.0) {
                cout<<"    - Temperature exceeds 35 deg C!\n";
            }
            if (relativeHumidity > 80.0) {
                cout<<"    - Humidity exceeds 80%!\n";
            }
        } else {
            cout<<"Normal environmental conditions.\n";
        }
        cout<<"-------------------------------------------\n\n";
    }
};

int main() {
    FarmMonitor f1("A-01",32.0,65.0);
    FarmMonitor f2("A-02",38.5,75.0);
    FarmMonitor f3("A-03",36.0,85.0);

    f1.displayInfo();
    f2.displayInfo();
    f3.displayInfo();

    return 0;
}
