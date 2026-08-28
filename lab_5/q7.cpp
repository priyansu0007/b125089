#include <iostream>
#include <math.h>
using namespace std;

int nearValue(int a,int b){
    return (abs(a)<abs(b))?a:b;
}
float nearValue(float a,float b){
    return abs(a)<abs(b)?a:b;
}
int nearValue(int* arr,int n){
   int near=0;
   for(int i=0;i<n;i++){
    if(abs(arr[i])<abs(arr[near]))near=i;
   }
   return arr[near];
}

int main(){
    int a=1,b=3,n=4;
    // cout<<"Enter the value of a and b: ";
    // cin>>a>>b;
    cout<<nearValue(a,b)<<'\n';

    float p=2.0,q=-0.5;
    // cout<<"Enter the value of p,q";
    // cin>>p>>q;
    cout<<nearValue(p,q)<<'\n';

    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int* arr=new int[n];

    int arr[]={-1,2,3,4};
    // for(int i=0;i<n;i++){cout<<"Enter the element: ";cin>>arr[i];}
    cout<<"Nearest index element: "<<nearValue(arr,n)<<endl;
    return 0;
}