#include <stdio.h>
int temp(int , int);
int main(void)
{
    int a,b;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter an integer: ");
    scanf("%d",&b);
    printf("result -> %d\n", temp(a,b));
    return 0;
}
int temp(int a, int b)
{
   
    return a==5||b==5||a+b==5||a-b==5||b-a==5;
}