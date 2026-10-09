#include <iostream>
#include <string>

using namespace std; 

class InventoryItem {
private:
    string productId;
    double unitPrice;
    int quantity;

public:
    InventoryItem(string id="",double price=0.0,int qty=0){
        productId=id;
        unitPrice=price;
        quantity=qty;
        }

    InventoryItem operator+(InventoryItem& other){
        if (productId == other.productId && unitPrice == other.unitPrice) {
            return InventoryItem(productId,unitPrice,quantity + other.quantity);
        } else {
            cout<<"\nIncompatible items cannot be combined!\n";
            cout<<"Product IDs or Unit Prices do not match.\n";
            return InventoryItem("",0.0,-1); 
        }
    }

    void display() {
        if (quantity < 0) {
            cout<<"Invalid Inventory Item\n";
            return;
        }
        cout<<"ID: "<<productId<<" | Unit Price: $"<<unitPrice 
                 <<" | Quantity: "<<quantity;
    }
};

int main() {
    InventoryItem item1("ITM01",12.50,40);
    InventoryItem item2("ITM01",12.50,60);
    InventoryItem item3("ITM02",15.00,20);

    cout<<"Item 1: "; 
    item1.display(); 
    cout<<"\n";
    cout<<"Item 2: "; 
    item2.display(); 
    cout<<"\n";
    cout<<"Item 3: "; 
    item3.display(); 
    cout<<"\n";

    cout<<"\nCombining Item 1 and Item 2:\n";
    InventoryItem combinedSuccess=item1+item2;
    cout<<"Result: "; 
    combinedSuccess.display(); 
    cout<<"\n";

    cout<<"\nCombining Item 1 and Item 3:\n";
    InventoryItem combinedFail=item1+item3;
    cout<<"Result: "; 
    combinedFail.display();
    cout<<"\n";

    return 0;
}