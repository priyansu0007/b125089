#include <iostream>
using namespace std;

class LibraryAccess{
protected:
    int booksBorrowed;

public:
    LibraryAccess(int books) {
        booksBorrowed=books;
    }
};

class LaboratoryAccess{
protected:
    int pendingLabSubmissions;
public:
    LaboratoryAccess(int pending){
        pendingLabSubmissions=pending;
    }
};

class StudentAccess : public LibraryAccess, public LaboratoryAccess {
private:
    string studentName;
public:
    StudentAccess(string name,int books,int pendingLabs) : LibraryAccess(books), LaboratoryAccess(pendingLabs) {
        studentName = name;
    }
    void displayAccessStatus() {
        cout<<"--- Resource Access Status: "<<studentName<<" ---\n";
        cout<<"Books Borrowed         : "<<booksBorrowed<<" (Limit<=5)\n";
        cout<<"Pending Lab Submissions: "<<pendingLabSubmissions<<" (Required=0)\n";

        if (booksBorrowed<=5 && pendingLabSubmissions==0) {
            cout<<"Access Result          : FULL RESOURCE ACCESS GRANTED\n\n";
        } else {
            cout<<"Access Result          : ACCESS DENIED\n\n";
        }
    }
};

int main() {
    StudentAccess s1("Rahul",3,0);
    StudentAccess s2("om",6,0);
    StudentAccess s3("Nitin",2,1);

    s1.displayAccessStatus();
    s2.displayAccessStatus();
    s3.displayAccessStatus();

    return 0;
}
