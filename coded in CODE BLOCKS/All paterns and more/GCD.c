#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2nd number:");
    scanf("%d",&n2);
    int a=n1,b=n2;
    n1=(n1>0)?n1:-n1;
    n2=(n2>0)?n2:-n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
          n1-=n2;
        }
        else
        {
          n2-=n1;
        }

    }
    printf("\nGCD of %d and %d is-->%d\n\n",a,b,n1);
    return 0;
}
