#include <stdio.h>
#include <stdlib.h>

int max(int* arr,int n){
   
    if(n==1) return 0;
    int maxIdx=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[maxIdx]) maxIdx=i;
    }
    return maxIdx;
}
int min(int* arr,int n){
    
    if(n==1) return 0;
    int minIdx=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[minIdx]) minIdx=i;
    }
    return minIdx;
}
void avg(int* arr,int n){
    
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\n Average: %.2f",sum/n);

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

    int minId=min(arr,n);
    int maxId=max(arr,n);

    printf("largest element: %d \nsmallest element: %d",arr[maxId],arr[minId]);
    avg(arr,n);


}