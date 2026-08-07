#include <iostream>
using namespace std;

class Square {
    int length;

public:
    void getSide() {
        cout << "Enter the side length: ";
        cin >> length;
    }

    int calcArea() const {
        return length * length;
    }

    int calcPeri() const {
        return 4 * length;
    }

    void displayDetails() const {
        cout << "Area: " << calcArea() << "\n";
        cout << "Perimeter: " << calcPeri() << "\n";
    }
};

int main() {
    Square s1;
    s1.getSide();
    s1.displayDetails();
    return 0;
}