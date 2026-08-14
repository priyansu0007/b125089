#include <iostream> 
#include <memory>

using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]&1) odd++;
        else even++;
    }
    cout<<"Number of odd elements: "<<odd<<"\nNumber of even elements: "<<even<<endl;
    delete[] arr;
    return 0;
}