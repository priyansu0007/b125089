#include <iostream>
#include <memory>
using namespace std;

void evaluate(int a,int b){
    cout<<(a+b)/2.0<<endl;
}
void evaluate(int a,int b,int c){
    cout<<(a+b+c)/3.0<<endl;
}
void evaluate(float a,float b){
    cout<< (a+b)/2<<endl;
}
void evaluate(int* arr,int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum/n<<endl;
}

void evaluate(int* a,int* b){
    cout<<(*a+*b)/2.0<<endl;
}

int main(){
    int a,b,c;
    cout<<"Enter the value of a,b: ";
    cin>>a>>b;
    evaluate(a,b);

    cout<<"Enter the value of a,b and c: ";
    cin>>a>>b>>c;
    evaluate(a,b,c);

    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";cin>>arr[i];
    }
    evaluate(arr,n);

    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    evaluate(&a,&b);

    return 0;

}