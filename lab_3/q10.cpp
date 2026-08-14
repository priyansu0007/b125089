#include <iostream>
#include <memory>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;

    int** m1= new int*[m];
    cout<<"Enter matrix 1: "<<endl;
    for(int i=0;i<m;i++){
        int *row= new int[n];
        for(int j=0;j<n;j++){
            cout<<"Enter element at row "<<i<<" column "<<j<<": ";
            cin>>row[j];
        }
        m1[i]=row;
    }

    cout<<"Enter matrix 2"<<endl;

    int** m2= new int*[m];
    for(int i=0;i<m;i++){
        int *row= new int[n];
        for(int j=0;j<n;j++){
            cout<<"Enter element at row "<<i<<" column "<<j<<": ";
            cin>>row[j];
        }
        m2[i]=row;
    }
    cout<<"Matrix 1: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix 2: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Result: "<<endl;
    int** res= new int*[m];
    for(int i=0;i<m;i++){
        int *row= new int[n];
        for(int j=0;j<n;j++){
            row[j]=m1[i][j]+m2[i][j];
        }
        res[i]=row;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<m;i++){
        delete[] m1[i];
        delete[] m2[i];
        delete[] res[i];
    }
    delete[] m1;
    delete[] m2;
    delete[] res;
    return 0;
}