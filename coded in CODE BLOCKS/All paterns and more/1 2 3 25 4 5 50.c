// 1 2 3 25 4 5 6  ........

#include<stdio.h>
main()
{
int n,i;
printf("Enter how many times:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
    {
        if(i==4)
            printf("%d\t",25);
       else
        printf("%d\t",i);

    }
return 0;
}





