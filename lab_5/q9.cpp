#include <iostream>
#include <memory>
using namespace std;

void inspect(int a){cout<<"Value: "<<a<<endl;}
void inspect(int* a){cout<<"Value at pointer: "<<*a<<endl;}

void inspect(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a,n;
    cout<<"Enter the value of a: ";
    cin>>a;
    inspect(a);
    inspect(&a);

    cout<<"Enter the size of the array: ";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    inspect(arr,n);

    return 0;
    
}