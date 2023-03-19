#include<stdio.h>
main()
{
int a,b;
printf("Enter Limit :");
scanf("%d %d",&a,&b);
while(a<=b)
{
if((a%4==0 && a%100!=0) || a%400==0)
{printf("%d -> Leap Year\n",a);}
a++;
}
}
