#include <iostream>
using namespace std;

class Candidate {
protected:
    string candidateID;
    double attendancePercentage;
public:
    Candidate(string id,double attendance) {
        candidateID = id;
        attendancePercentage = attendance;
    }
};
class RegularCandidate : public Candidate {
public:
    RegularCandidate(string id,double attendance) : Candidate(id,attendance) {}

    void checkEligibility() {
        cout<<"Regular Candidate ["<<candidateID<<"]\n";
        cout<<"Attendance: "<<attendancePercentage<<"%\n";
        if (attendancePercentage>=75.0) {
            cout<<"Status    : Eligible for examination.\n\n";
        } else {
            cout<<"Status    : NOT eligible (Requires >= 75%).\n\n";
        }
    }
};

class ReappearCandidate : public Candidate {
public:
    ReappearCandidate(string id,double attendance)
        : Candidate(id,attendance){}

    void checkEligibility() {
        cout<<"Reappear Candidate ["<<candidateID<<"]\n";
        cout<<"Attendance: "<<attendancePercentage<<"%\n";
        if (attendancePercentage>=60.0) {
            cout<<"Status    : Eligible for examination.\n\n";
        } else {
            cout<<"Status    : NOT eligible (Requires >= 60%).\n\n";
        }
    }
};

int main() {
    RegularCandidate reg1("b125089",78.5);
    RegularCandidate reg2("b125093",71.0);

    ReappearCandidate reap1("b125076",62.0);
    ReappearCandidate reap2("b125077",55.0);

    reg1.checkEligibility();
    reg2.checkEligibility();
    reap1.checkEligibility();
    reap2.checkEligibility();

    return 0;
}
