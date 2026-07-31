#include <stdio.h>
#include <stdlib.h>
void avg(int* arr,int n){
    printf("calculating...\n");
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }
    printf("Average: %.2f",sum/n);
}
int main(){
    int n=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while(!n){
        printf("\nn can't be zero, enter again: ");
        scanf("%d",&n);
    }
    int* arr= (int* )malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }

    avg(arr,n);
    
}