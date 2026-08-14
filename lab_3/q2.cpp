#include <iostream>
#include <memory>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the aray: ";
    cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    cout<<"Reverse array: "<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}