#include<stdio.h>
long fact(int i);

int main()
{
    float num,i,j,r=0,reasult=0,k;
    printf("Enter your number :");
    scanf("%f",&num);
    k=1;
    for(i=1;i<=num;i++)
    {
    r=fact(k)/(i*10);
    printf("%.2f\n",r);
      k=k+2;
    reasult+=r;

    }
printf("\n-------------\n%.2f",reasult);
return 0;

}
long fact(int i)
{
    int f=1,j;
       for(j=1;j<=i;j++)
    {
        f=f*j;
    }
    return f;
}
