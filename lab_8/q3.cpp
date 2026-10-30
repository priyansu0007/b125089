#include <iostream>
using namespace std;

class TrafficSignal {
public:
    virtual int getGreenDuration(int vehicleCount) = 0;
    virtual ~TrafficSignal(){}
};

class UrbanSignal : public TrafficSignal{
public:
    int getGreenDuration(int vehicleCount){
        int duration=10+(2*vehicleCount);
        if (duration>60) {
            duration=60;
        }
        return duration;
    }
};

class HighwaySignal : public TrafficSignal {
public:
    int getGreenDuration(int vehicleCount) {
        int duration=15+(3*vehicleCount);
        if (duration>90) {
            duration=90;
        }
        return duration;
    }
};

int main() {
    UrbanSignal urban;
    HighwaySignal highway;
    TrafficSignal* signalPtr = NULL;
    int vehicleCounts[] = {10, 30};
    for (int i = 0; i < 2; i++) {
        int count = vehicleCounts[i];
        cout<<"=== Vehicle Count: "<<count<<" ===\n";
        signalPtr = &urban;
        cout<<"Urban Signal Green Duration   : "
            <<signalPtr->getGreenDuration(count)<<" seconds (Cap: 60s)\n";
        signalPtr = &highway;
        cout<<"Highway Signal Green Duration : "
            <<signalPtr->getGreenDuration(count)<<" seconds (Cap: 90s)\n\n";
    }

    return 0;
}
