// 1 10 100 1000........

#include<stdio.h>
main()
{
int n,i,k=1;
printf("Enter how many times:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   printf("%d \t",k);
   k*=10;
   k+=1;

}
return 0;
}





