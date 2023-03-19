#include<stdio.h>
int main()
{
    int a=5,b=10,i,j,n=1,r;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            r=n*j;
            printf("%d \t",r);
        }
        n++;
        printf("\n");
    }

    return 0;
}
