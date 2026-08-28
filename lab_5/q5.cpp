#include <iostream>
using namespace std;


void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    
}
void swap(float& a,float& b){
    float temp=a;
    a=b;
    b=temp;
}
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;
    float m,n;
    cout<<"Enter the first and second integer: ";
    cin>>a>>b;
    cout<<"Enter the first and second floating point number: ";
    cin>>m>>n;
    swap(a,b);
    cout<<"a,b: "<<a<<", "<<b<<endl;
    swap(m,n);
    cout<<"m, n: "<<m<<", "<<n<<endl;;
    swap(&a,&b);
    cout<<"a, b: "<<a<<", "<<b<<endl;
    return 0;
}