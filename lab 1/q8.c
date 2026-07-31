#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while(n<=0){
        printf("\nn can't be zero, enter again: ");
        scanf("%d",&n);
    }
    int* arr= (int* )malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);


}