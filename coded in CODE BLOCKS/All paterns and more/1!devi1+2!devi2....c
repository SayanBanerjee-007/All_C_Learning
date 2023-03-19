//1!/1+2!/2+3!/3+4!/4
#include<stdio.h>
int main()
{
    float num,i,j,f=1,reasult=0;
    printf("Enter your number :");
    scanf("%f",&num);
    for(i=1;i<=num;i++)
    {
        f=1;
       for(j=1;j<=i;j++)
    {
        f=f*j;
    }
    reasult+=f/i;
    printf("%.2f\n",f/i);
    }
printf("\n-------------\n%.2f",reasult);
return 0;

}
