#include<stdio.h>
int sum(int a,int b)
{
    if(b==0)
    return a;
    int res=sum(a,b-1)+1;
    return res;
}
int main()
{
    int x,y;
    printf("Enter first num:");
    scanf("%d",&x);
    printf("Enter first num:");
    scanf("%d",&y);
    printf("Sum of %d and %d is %d.",x,y,sum(x,y));
}
