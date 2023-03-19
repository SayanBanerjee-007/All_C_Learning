#include<stdio.h>
int factorial(int x);
int main()
{
    printf("Enter your PPOSITIVE INTEGER number:\n");
    int a;
    scanf("%d",&a);
    printf("The value of factorial %d is %d \n",a,factorial(a));
    return 0;
    }

int factorial(int x)
{
    if(x>0)
    {
     return x * factorial(x-1);
    }else{
     return 1;
    }


}
