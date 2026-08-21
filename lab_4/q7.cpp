#include <iostream>
using namespace std;

class MueseumManager;
class Exhibit{
    string ename;
    int eid;
    int vcount;
    string dstat;
    public:
    Exhibit(){
        cout<<"Enter the exhibit name: ";
        cin>>ename;
        cout<<"Enter the exhibit id: ";
        cin>>eid;
        cout<<"Enter the visitor count: ";
        cin>>vcount;
        cout<<"Enter the display status(open/closed): ";
        cin>>dstat;

    }
    friend class MueseumManager;
};
class MueseumManager{
    public:
    void displayDetails(Exhibit &e){
        cout<<"Exhibit name: "<<e.ename<<endl;
        cout<<"Exhibit id: "<<e.eid<<endl;
        cout<<"Visitor count: "<<e.vcount<<endl;
        cout<<"Display status: "<<e.dstat<<endl;
    }
    void addVis(Exhibit &e){
        int viscount;
        cout<<"Enter the number of new visitors: ";
        cin>>viscount;
        e.vcount+=viscount;
        cout<<"Visitors updated successfully"<<endl;
    }
    void resetVis(Exhibit &e){
        e.vcount=0;
        cout<<"visitor count is now 0"<<endl;
    }
    void changeDstat(Exhibit &e,bool open){
        if(e.dstat=="open" && open){cout<<"The exhibit is already open"<<endl;return;}
        else{
            e.dstat="closed";
            cout<<"Display closed successfully"<<endl;
            return ;
        }
        if(e.dstat=="closed" && !open)cout<<"The exhibit is already closed"<<endl;
        else{
            e.dstat="open";
            cout<<"Display opened successfully"<<endl;
        }

    }
    void checkOpen(Exhibit &e){
        cout<<"Exhibit is currently "<<e.dstat<<endl;
    }
};
int main(){
    Exhibit e1;
    MueseumManager m;
    m.displayDetails(e1);
    m.addVis(e1);
    m.resetVis(e1);
    m.changeDstat(e1,1);
    m.changeDstat(e1,0);
    m.checkOpen(e1);
    return 0;
}