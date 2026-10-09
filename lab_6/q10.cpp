#include <iostream>

class Bill {
private:
    int itemCount;
    double totalAmount;

public:
    Bill(int count = 0, double total = 0.0) : itemCount(count), totalAmount(total) {}

    Bill operator+(const Bill& other) const {
        return Bill(itemCount + other.itemCount, totalAmount + other.totalAmount);
    }

    bool operator>(const Bill& other) const {
        return totalAmount > other.totalAmount;
    }

    void display() const {
        std::cout << "Items: " << itemCount << ", Amount: $" << totalAmount;
    }
};

int main() {
    Bill bill1(4, 120.50);
    Bill bill2(3, 89.25);

    std::cout << "Bill 1: "; bill1.display(); std::cout << "\n";
    std::cout << "Bill 2: "; bill2.display(); std::cout << "\n";

    Bill combinedBill = bill1 + bill2;
    std::cout << "Combined Bill: "; combinedBill.display(); std::cout << "\n";

    if (bill1 > bill2) {
        std::cout << "Bill 1 is larger than Bill 2.\n";
    } else {
        std::cout << "Bill 1 is NOT larger than Bill 2.\n";
    }

    return 0;
}