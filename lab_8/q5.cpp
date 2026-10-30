#include <iostream>
#include <string>

using namespace std;

class Scholarship {
public:
    virtual double calculateAward(double marks, double familyIncome) = 0;
    virtual ~Scholarship() {}
};

class MeritScholarship : public Scholarship {
public:
    double calculateAward(double marks, double familyIncome) {
        if (marks >= 90.0) {
            return 20000.0;
        } else if (marks >= 80.0) {
            return 10000.0;
        }
        return 0.0;
    }
};

class NeedBasedScholarship : public Scholarship {
public:
    double calculateAward(double marks, double familyIncome) {
        if (familyIncome < 200000.0 && marks >= 70.0) {
            return 25000.0;
        }
        return 0.0;
    }
};

int main() {
    MeritScholarship merit;
    NeedBasedScholarship needBased;

    Scholarship* scholarshipPtr = NULL;

    double marks = 85.0;
    double income = 150000.0;

    cout << "Student Profile: Marks = " << marks << "%, Income = Rs. " << income << "\n\n";

    scholarshipPtr = &merit;
    cout << "Merit Scholarship Award      : Rs. "
         << scholarshipPtr->calculateAward(marks, income) << "\n";

    scholarshipPtr = &needBased;
    cout << "Need-Based Scholarship Award : Rs. "
         << scholarshipPtr->calculateAward(marks, income) << "\n";

    return 0;
}
