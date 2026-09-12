#include <iostream>
#include <memory>
using namespace std;

class Locker{
    int lNum;
    string ocStat;
    int cSize;
    char* arr;

    public:
    Locker(){
        cout<<"Enter the locker number: ";
        cin>>lNum;
        cout<<"Enter the occupancy status(occupied/vacant): ";
        cin>>ocStat;
        cout<<"Enter the code size: ";
        cin>>cSize;
        arr=new char[cSize];
        setCode();
    }
    ~Locker(){
        delete[] arr;
    }
    void setCode(){
        cout<<"Enter the code: ";
        for(int i=0;i<cSize;i++){
            cin>>arr[i];
        }
    }
    void setCode(int k){
        if(k>=cSize || k<0){
            cout<<"invalid location"<<endl;
            return;
        }
        cout<<"Enter the value to change: ";
        cin>>arr[k];
    }
};

int main(){
    int n;
    cout<<"Enter the number of lockers: ";
    cin>>n;
    Locker* lockers=new Locker[n];
    
    if(n>=2){
        (lockers+1)->setCode(1);
    }
    
    delete[] lockers;    
    return 0;
}