#include<stdio.h>
int main()
{
    float p,t,r,SI;
    printf("Enter AMMOUNT: ");
    scanf("%f",&p);
    printf("Enter time period: ");
    scanf("%f",&t);
    printf("Enter interest rate: ");
    scanf("%f",&r);

    SI=(p*t*r)/100;
    printf("%.2f",SI);

    return 0;
}
