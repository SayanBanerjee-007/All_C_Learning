#include<stdio.h>
main()
{
int i,n;
printf("Enter Limit :");
scanf("%d",&n);
for(i=1;i<=100;i++)
{
if(i%3==0 || i%7==0 || i%11==0)
printf("%d \t",i);

}

}
