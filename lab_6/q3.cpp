#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    double price;

public:
    Book(string t="",double p=0.0){title=t; price=p;}

    bool operator<(Book& other){
        if (price!=other.price) {
            return price<other.price;
        }
        return title<other.title;
    }

    void display(){
        cout<<"\""<<title<<"\" ($"<<price<< ")";
    }
};

int main() {
    Book b1("game of thrones",45.50);
    Book b2("lord of the mysteries",45.50);

    cout <<"Book 1: ";
    b1.display();
    cout<<"\n";
    cout<<"Book 2: "; 
    b2.display(); 
    cout<<"\n";

    if (b1 < b2) {
        cout<<"Book 1 is smaller than Book 2.\n";
    } else {
        cout<<"Book 1 is not smaller than Book 2.\n";
    }

    return 0;
}