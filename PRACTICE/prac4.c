#include <stdio.h>
int temp(int,int);
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
int temp(int a,int b)
{
    if(a<=10&&a<100&&b<=10&&b<100)
    return 0;
    if(a%10==b%10)
    return 1;
    a/=10;
    if(a==b%10)
    return 1;
    b/=10;
    if(a=b)
    return 1;
}