#include <iostream>
#include <string>

using namespace std;

class CricketPlayer {
    string name;
    int matches;
    int runs;

public:
    void getDetails() {
        cout << "Enter the player name: ";
        cin >> name;
        cout << "Enter the number of matches: ";
        cin >> matches;
        cout << "Enter the number of runs scored: ";
        cin >> runs;
        cout << "Data entered successfully\n" << endl;
    }

    double batAvg() const {
        if (matches <= 0) return 0.0;
        return (double)runs / matches;
    }

    void performance() const {
        double avg = batAvg();
        string pf;

        if (avg >= 50) pf = "Excellent";
        else if (avg >= 35) pf = "Good";
        else if (avg >= 20) pf = "Average";
        else pf = "Poor";

        cout << "Player report:" << endl;
        cout << "Name: " << name << endl;
        cout << "Matches: " << matches << endl;
        cout << "Runs: " << runs << endl;
        cout << "Batting average: " << avg << endl;
        cout << "Performance: " << pf << endl;
    }
};

int main() {
    CricketPlayer c1;
    c1.getDetails();
    c1.performance();
    return 0;
}