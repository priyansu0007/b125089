#include <iostream>
#include <memory>
using namespace std;

class LabSupervisor;

class Instrument{
    int id;
    string name;
    public:
    Instrument(){
        cout<<"Enter the instrument id: ";
        cin>>id;
        cout<<"Enter the name of the instrument: ";
        cin>>name;
    }
    friend class LabSupervisor;
};
class LabSupervisor{
    public:
    void modify(Instrument& i){
        cout<<"Enter the new instrument id: ";
        cin>>i.id;
        cout<<"Enter the new instrument name: ";
        cin>>i.name;
        cout<<"modified successfully"<<endl;
    }
};

int main(){
    Instrument* i=new Instrument;
    LabSupervisor* ls=new LabSupervisor;

    ls->modify(*i);
    delete i;
    delete ls;
}