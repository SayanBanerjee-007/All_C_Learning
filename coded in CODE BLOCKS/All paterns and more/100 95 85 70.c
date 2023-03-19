// 100 95 85 70 ........

#include<stdio.h>
main()
{
int n,i,k=100,s=5;
printf("Enter how many times:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   printf("%d \t",k);
   k-=s;
   s+=5;
}
return 0;
}





