#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    void getC() {
        cout << "Enter the temperature in Celsius: ";
        cin >> celsius;
    }

    double getFahrenheit() const {
        return (1.8 * celsius) + 32.0;
    }

    void displayTemp() const {
        cout << "Temperature in Celsius: " << celsius << endl;
        cout << "Temperature in Fahrenheit: " << getFahrenheit() << endl;
    }
};

int main() {
    Temperature t1;
    t1.getC();
    t1.displayTemp();
    return 0;
}