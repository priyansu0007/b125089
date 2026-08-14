#include <iostream>
#include <memory>
using namespace std;

void acceptElement(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    cout<<"\nElements accepted successfully!!\n"<<endl;
}
int calcSum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int sElement(int* arr,int n){
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest) smallest = arr[i];
    }
    return smallest;
}
int lElement(int* arr,int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}
void display(int* arr,int n){
    acceptElement(arr,n);
    int sum=calcSum(arr,n);
    int smallest=sElement(arr,n);
    int largest=lElement(arr,n);
    cout<<"\nSum: "<<sum<<"\nsmallest element: "<<smallest<<"\nlargest element: "<<largest<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int* arr=new int[n];
    display(arr,n);
    delete[] arr;
    return 0;
}

