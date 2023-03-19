#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("\nEnter value of b :");
    scanf("%d",&b);
    printf("The value of a and b before swap %d and %d\n",a,b);

    swap(&a,&b);
    printf("The value of a and b after swap %d and %d\n",a,b);

    return 0;
}
void swap(int *a,int *b){
  int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
