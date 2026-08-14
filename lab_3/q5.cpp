#include <iostream>
#include <memory>
using namespace std;

class Book{
    int bId;
    char bTitle[30];
    char author[30];
    float price;
    public:
    void getDetails(){
        cout<<"Enter the book id: ";
        cin>>bId;
        cout<<"Enter the book title: ";
        cin.ignore();
        cin.getline(bTitle,30);
        cout<<"Enter the author: ";
        
        cin.getline(author,30);
        cout<<"Enter the price: ";
        cin>>price;
        cout<<"Data entered successfully";
    }
    void displayDetails(){
        cout<<"\n==========================\n";
        cout<<"Book Id: "<<bId<<endl;
        cout<<"Book title: "<<bTitle<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"==========================\n";
    }
};

int main(){
    Book* b=new Book;
    b->getDetails();
    b->displayDetails();
    delete b;
    return 0;
}