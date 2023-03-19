// 1-2 3-4 ........

#include<stdio.h>
main()
{
int n,i,s=1;
printf("Enter how many times:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   printf("%d\t",s*i);
   s=s*(-1);
}
return 0;
}





