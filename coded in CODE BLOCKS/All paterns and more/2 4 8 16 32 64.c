//2 4 16 32 64 .........
#include<stdio.h>
main()
{
int n,i,k=2;
printf("How many times :");
scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d \t",k);
        k*=2;
    }
return 0;

}




