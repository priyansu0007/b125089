#include <iostream>
#include <memory>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    char* arr= new char[n+1];
    cout<<"Enter the string: ";
    cin.ignore();
    cin.getline(arr,n);
    int v=0,c=0,d=0,s=0;
    for(int i=0;i<n;i++){
        if(arr[i]>='0' && arr[i]<='9')d++;
        else if(arr[i]==' ')s++;
        else if((arr[i]>='a' && arr[i]<='z')|| (arr[i]>='A'&&arr[i]<='Z')){
            if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'|| arr[i]=='I'|| arr[i]=='o'|| arr[i]=='O'|| arr[i]=='u' || arr[i]=='U')v++;
            else c++;
        }
    }
    cout<<"Your sentence had\n"<<c<<" consonants\n"<<v<<" vowels\n"<<d<<" digits\n"<<s<<" spaces"<<endl;
    
    delete[] arr;
    return 0;
}