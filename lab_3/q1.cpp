#include <iostream>
#include <memory>
using namespace std;

int main(){
    int *num1= new int;
    int *num2=new int;
    cout<<"Enter the first number: ";
    cin>>*num1;
    cout<<"Enter the second number: ";
    cin>>*num2;
    cout<<"Sum: "<<*num1+*num2<<"\nDifference: "<<*num1-*num2<<"\nproduct: "<<*num1 * *num2<<"\nquotient: "<<*num1 / *num2<<endl;
    delete num1,num2;
    
    return 0;
}