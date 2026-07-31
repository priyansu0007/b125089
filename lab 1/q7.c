#include <stdio.h>

struct student{
    int rollnum;
    char name[20];
    int marks;
};
int main(){
    struct student arr[5];
    for(int i=0;i<5;i++){
        printf("Enter the details of student %d:\n",i+1);
        printf("roll number:");
        scanf("%d",&arr[i].rollnum);
        printf("name:");
        scanf("%[^\n]",arr[i].name);
        printf("marks: ");
        scanf("%d",&arr[i].marks);
    }

    int highest=0;
    for(int i=0;i<5;i++){
        if(arr[i].marks>arr[highest].marks) highest=i;
    }
    printf("Details of student with highest marks:\n");
    printf("==========================================\nname: %s\nroll number: %d\nmarks: %d\n==========================================\n",arr[highest].name,arr[highest].rollnum,arr[highest].marks);

    double sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i].marks;
    }
    printf("\nAverage marks of class: %.2f\n",sum/5);
}