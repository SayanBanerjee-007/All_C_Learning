#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("\nEnter value of b :");
    scanf("%d",&b);
    printf("The value of a and b before swap %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a and b after swap %d and %d\n",a,b);





}


