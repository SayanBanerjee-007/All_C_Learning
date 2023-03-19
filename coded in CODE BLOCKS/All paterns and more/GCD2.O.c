#include<stdio.h>
int main()
{
    int n1,n2,gcd;
    printf("Enter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2nd number:");
    scanf("%d",&n2);
    int a=n1,b=n2;
    n1=(n1>0)?n1:-n1;
    n2=(n2>0)?n2:-n2;
    for(int i =1;i<=n1 && i<=n2;i++){
       if(n1%i==0 && n2%i==0)
            gcd = i;

    }
    printf("\nGCD of %d and %d is-->%d\n\n",a,b,gcd);
    return 0;
}

