#include <stdio.h>
#include <stdlib.h>


void reverse(int* arr,int n){
    int l=0,r=n-1;
    while(l<=r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;r--;
    }
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
   

    printf("Before reversing: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    reverse(arr,n);

    printf("After reversing: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    
}