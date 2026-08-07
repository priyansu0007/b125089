#include <iostream>
using namespace std;

class MovieTicket{
    public:
    string mName;
    int price;
    int n;
    void getDetails(){
        cout<<"Enter movie name: ";
        cin>>mName;
        cout<<"Enter price for a single ticket: ";
        cin>>price;
        cout<<"Enter the number of tickets: ";
        cin>>n;

    }
    int TotalAmt(){
        return n*price;
    }
    void displayTotal(){
        int totalamt=TotalAmt();
        cout<<"Movie name: "<<mName<<endl;
        cout<<"Price per ticket: "<<price<<endl;
        cout<<"total tickets: "<<n<<endl;
        cout <<"Total Amount: "<<totalamt<<endl;
        
    }
};
int main(){
    MovieTicket m1;
    m1.getDetails();
    m1.displayTotal();
    return 0;
}