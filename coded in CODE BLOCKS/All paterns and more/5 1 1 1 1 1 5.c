// 5 1 1 1 1 5  ........

#include<stdio.h>
main()
{
int n,i;
printf("Enter how many times:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
            printf("%d\t",5);
       else
        printf("%d\t",1);

    }
return 0;
}





