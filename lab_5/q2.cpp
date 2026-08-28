#include <iostream>
using namespace std;

float area(int len){
    return len*len;
}
float area(int l,int b){
    return l*b;
}
float area(float r){
    return 3.14*r*r;
} 

int main(){
    int a,l,b;
    float r;
    cout<<"Enter the side of square, length and breadth of rectangle and radius of circle: ";
    cin>>a>>l>>b>>r;
    cout<<"Area of square: "<<area(a)<<"\nArea of rectangle: "<<area(l,b)<<"\nArea of circle: "<<area(r);
    return 0;
}