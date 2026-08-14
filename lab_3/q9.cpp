#include <iostream>
#include <memory>
using namespace std;

class Employee{
    int eId;
    char name[30];
    int salary;
    public:
    void getDetails(){
        cout<<"Enter employee id: ";
        cin>>eId;
        cout<<"Enter the employee name: ";
        cin.ignore();
        cin.getline(name,30);
        cout<<"Enter their salary: ";
        cin>>salary;
        cout<<"Data entered successfully"<<endl;
    }
    void displayDetails(){
        cout<<"\n============================\n";
        cout<<"Employee id: "<<eId<<endl;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"============================\n";
  
    }
    int getSalary(){
        return salary;
    }

};
int main(){
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    double sum=0;
    int h=0;
    Employee* arr=new Employee[n];
    for(int i=0;i<n;i++){
        arr[i].getDetails();
    }
    for(int i=0;i<n;i++){
        arr[i].displayDetails();
        sum+=arr[i].getSalary();
        if(arr[i].getSalary()>arr[h].getSalary()) h=i;
    }
    cout<<"Employee with highest salary: "<<endl;
    arr[h].displayDetails();
    cout<<"\nAverage salary: "<<sum/n<<endl;

    delete[] arr;
    return 0;
    
}