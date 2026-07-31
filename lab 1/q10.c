#include <stdio.h>
#include <stdlib.h>

struct student{
    int rollnum;
    char name[20];
    int marks;
};

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(n<=0){
        printf("n can only be positive, enter again: ");
        scanf("%d",&n);}
        struct student* arr=(struct student*)malloc(n*sizeof(struct student));

        for(int i=0;i<n;i++){
        printf("Enter the details of student %d:\n",i+1);
        printf("roll number:");
        scanf("%d",&arr[i].rollnum);
        printf("name:");
        scanf("%[^\n]",arr[i].name);
        printf("marks: ");
        scanf("%d",&arr[i].marks);
    }

    printf("Roll number\t\t\tName\t\t\tmarks\n");
    for(int i=0;i<n;i++){
        printf("%d \t\t\t %s \t\t\t %d \n",arr[i].rollnum,arr[i].name,arr[i].marks);
    }
    int highest=0;
    for(int i=0;i<n;i++){
        if(arr[i].marks>arr[highest].marks) highest=i;
    }
    printf("Details of student with highest marks:\n");
    printf("==========================================\nname: %s\nroll number: %d\nmarks: %d\n==========================================\n",arr[highest].name,arr[highest].rollnum,arr[highest].marks);
    free(arr);
        
    
}