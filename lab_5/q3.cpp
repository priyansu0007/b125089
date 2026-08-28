#include <iostream>
using namespace std;

void check(int n){
    if(!n)cout<<"Zero"<<endl;
    else if(n>0)cout<<"Positive"<<endl;
    else cout<<"Negative"<<endl;
}
void check(char c){
    if(c>='a'&& c<='z')cout<<"Lowercase"<<endl;
    else if(c>='A' && c<='Z')cout<<"Uppercase"<<endl;
}
int check(string arr,char target){
    for(int i=0;i<arr.length();i++){
        if(arr[i]==target)return i;
    }
    return -1;
}
int main(){
    int num;
    char c,target;
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Enter the target character: ";
    cin>>target;
    
    int idx=check(s,target);
    if(idx==-1)cout<<"Element not found"<<endl;
    else cout<<"Element found at index "<<idx<<endl;
    cout<<"Enter the character to check: ";
    cin>>c;
    check(c);
    cout<<"Enter the number to check: ";
    cin>>num;
    check(num);

}