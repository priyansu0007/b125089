#include <stdio.h>
void swap(int * a,int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    printf("before swapping\na=%d b=%d",a,b);

    swap(&a,&b);
    printf("after swapping\na=%d b=%d",a,b);

}