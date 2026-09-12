#include <iostream>
#include <memory>

using namespace std;

class QueueDisplay{
    int qSize;
    int* cIds;
    public:
    
    QueueDisplay(){
        cout<<"Enter the queue size: ";
        cin>>qSize;
        cIds=new int[qSize];
        insertId();
    }
    ~QueueDisplay(){
        delete[] cIds;
    }
    void insertId(){
        for(int i=0;i<qSize;i++){
            cout<<"Enter the id to be inserted: ";
            cin>>cIds[i];
        }
    }
    void displayId(){
        for(int i=0;i<qSize;i++){
            cout<<cIds[i]<<" ";
        }
        cout<<endl;
    }
    friend void exgQ(QueueDisplay& q1,QueueDisplay& q2);
};

void exgQ(QueueDisplay& q1,QueueDisplay& q2){
    int n=q1.qSize;
    int* temp=q1.cIds;
    q1.qSize=q2.qSize;
    q1.cIds=q2.cIds;
    q2.qSize=n;
    q2.cIds=temp;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    QueueDisplay* arr=new QueueDisplay[n];

    if(n>=2){
        exgQ(arr[0],arr[1]);
        arr[0].displayId();
        arr[1].displayId();
    }

    delete[] arr;
    return 0;
}