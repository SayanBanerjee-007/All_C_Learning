// 100 90 80 70........

#include<stdio.h>
main()
{
int n,i,k=100;
printf("Enter how many times:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   printf("%d \t",k);
   k-=10;

}
return 0;
}





