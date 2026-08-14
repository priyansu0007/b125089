#include <iostream>
#include <memory>
using namespace std;

int lSearch(int* arr,int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target)return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    int idx=lSearch(arr,n,target);
    if(idx==-1){ 
        cout<<"Element not found"<<endl;
    }
    else cout<<"Element found at index "<<idx<<endl;

    delete[] arr;
    return 0;
}