#include <iostream>
using namespace std;

int information(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}
int information(char arr[],int n,char c){
    int occ=0;
    for(int i=0;i<n;i++){
        if(arr[i]==c)occ++;
    }
    return occ;
}
int information(char arr[],int n,char c,int k){
    if(k>n)k=n;
    int occ=0;
    for(int i=0;i<k;i++){
        if(arr[i]==c)occ++;
    }
    return occ;
}
int main(){
    char arr[]="abcdedcba";
    int n=information(arr);
    cout<<"Length: "<<n<<endl;
    cout<<"occurence of c: "<<information(arr,n,'c')<<endl;
    cout<<"occurence of a in first 4 positions: "<<information(arr,n,'a',4)<<endl;
    return 0;
}
