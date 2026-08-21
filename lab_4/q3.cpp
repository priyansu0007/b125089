#include <iostream>
using namespace std;

class Camera{
    string brand;
    string model;
    int mp;
    int storage;
    public:
    Camera(){
        cout<<"Enter the camera brand: ";
        cin>>brand;
        cout<<"Enter the camera model: ";
        cin>>model;
        cout<<"Enter the megapixels: ";
        cin>>mp;
        cout<<"Enter the storage(int gb): ";
        cin>>storage;
    }
    friend void compareCamera(Camera &c1,Camera &c2);
};

void compareCamera(Camera &c1,Camera& c2){
    bool firstBetter=false;
    if(c1.mp==c2.mp){
        if(c1.storage>c2.storage)firstBetter=true;
    }
    else if(c1.mp>c2.mp)firstBetter=true;

    if(firstBetter){
        cout<<"Better camera's details: "<<endl;
    cout<<"Camera brand: "<<c1.brand<<endl;
    cout<<"Camera model: "<<c1.model<<endl;
    cout<<"Megapixels: "<<c1.mp<<endl;
    cout<<"Storage: "<<c1.storage<<endl;
    }
    else{
        cout<<"Better camera's details: "<<endl;
    cout<<"Camera brand: "<<c2.brand<<endl;
    cout<<"Camera model: "<<c2.model<<endl;
    cout<<"Megapixels: "<<c2.mp<<endl;
    cout<<"Storage: "<<c2.storage<<endl;
    }
    
}
int main(){
    Camera c1,c2;
    compareCamera(c1,c2);
    return 0;
}