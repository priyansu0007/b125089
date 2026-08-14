#include <iostream>
#include <memory>
using namespace std;

class Product{
    int pId;
    char pName[30];
    float price;
    int quantity;
    public:
    void getDetails(){
        cout<<"Enter the product id: ";
        cin>>pId;
        cout<<"Product Name: ";
        cin.ignore();
        cin.getline(pName,30);
        cout<<"price: ";
        cin>>price;
        cout<<"Quantity: ";
        cin>>quantity;
        cout<<endl;
    }
    int totalCost(){
        return price*quantity;
    }
};

int main(){
    int n;
    cout<<"Enter the number of objects: ";
    cin>>n;
    Product*arr= new Product[n];
    for(int i=0;i<n;i++){
        arr[i].getDetails();
    }

    long long iValue=0;
    for(int i=0;i<n;i++){
        cout<<"Cost of product "<<i+1<<": "<<arr[i].totalCost()<<endl;
        iValue+=arr[i].totalCost();
    }
    cout<<"\nTotal inventory cost: "<<iValue<<endl;
    delete[] arr;
    return 0;


}