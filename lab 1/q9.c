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
        scanf("%d",&(arr+i)->rollnum);
        printf("name:");
        scanf("%[^\n]",(arr+i)->name);
        printf("marks: ");
        scanf("%d",&(arr+i)->marks);
    }

    printf("Roll number\t\t\tName\t\t\tmarks\n");
    for(int i=0;i<5;i++){
        printf("============================================================================\n");
        printf("%d\t\t\t%s\t\t\td \n",(arr+i)->rollnum,(arr+i)->name,(arr+i)->marks);
    }
    return 0;

}