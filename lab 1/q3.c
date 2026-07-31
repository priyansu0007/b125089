#include <stdio.h>
#include <stdlib.h>

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
   
    int target;
    int idx=-1;
    printf("Enter target: ");
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index %d",idx);
    }
    return 0;
}