#include <iostream>
#include <memory>
using namespace std;

void update(int &a,int n){
    a+=n;
}
void update(float &b,float n){b+=n;}
void update(int* arr,int n,int a){
    for(int i=0;i<n;i++){arr[i]+=a;}
}

int main(){
    int a,b,n,amt;
    cout<<"Enter the number and the amount to increment with: ";
    cin>>a>>b;
    cout<<"a: "<<a<<endl;
    update(a,b);
    cout<<"a: "<<a<<endl;

    float c,d;
    cout<<"Enter the float number and the amount to increment with: ";
    cin>>c>>d;

    cout<<"num: "<<c<<endl;
    update(c,d);
    cout<<"num: "<<c<<endl;

    cout<<"Enter the size of array: ";
    cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";cin>>arr[i];
    }
    cout<<"Enter the amount to increment the array with: ";
    cin>>amt;
    for(int i=0; i<n;i++){cout<<arr[i]<<" ";}
    cout<<endl;
    update(arr,n,amt);
    for(int i=0; i<n;i++){cout<<arr[i]<<" ";}
    cout<<endl;
    return 0;

}