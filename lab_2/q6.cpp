#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
    void getTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    Time addTime(const Time& t2) const {
        Time result;
        int totalMinutes = (hours * 60 + minutes) + (t2.hours * 60 + t2.minutes);
        result.hours = totalMinutes / 60;
        result.minutes = totalMinutes % 60;
        return result;
    }

    void displayTime() const {
        cout << hours << " hr " << minutes << " min" << endl;
    }
};

int main() {
    Time t1, t2, t3;
    cout << "Enter details for First Time:" << endl;
    t1.getTime();
    cout << "\nEnter details for Second Time:" << endl;
    t2.getTime();
    t3 = t1.addTime(t2);
    cout << "\n--- Resulting Time ---" << endl;
    t1.displayTime();
    cout << "+ ";
    t2.displayTime();
    cout << "= ";
    t3.displayTime();

    return 0;
}