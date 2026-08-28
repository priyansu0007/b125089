#include <iostream>
#include <memory>
using namespace std;

int process(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
float process(float* arr,int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int process(int* arr,int n,int k){
    if(k>n)k=n;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n1,n2,n3;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    int* a1=new int[n1];
    for(int i=0;i<n1;i++){
        cout<<"Enter the element: ";
        cin>>a1[i];
    }
    cout<<"Enter the size of second array: ";
    cin>>n2;
    float* a2=new float[n2];
    for(int i=0;i<n2;i++){
        cout<<"Enter the element: ";
        cin>>a2[i];
    }
    cout<<"Enter the size of third array: ";
    cin>>n3;
    int* a3=new int[n3];
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    for(int i=0;i<n3;i++){
        cout<<"Enter the element: ";
        cin>>a3[i];
    }
    cout<<"Sum of first array: "<<process(a1,n1)<<"\nSum of second array: "<<process(a2,n2)<<"\nSum of k elements of third array: "<<process(a3,n3,k)<<endl;
    return 0;

}
