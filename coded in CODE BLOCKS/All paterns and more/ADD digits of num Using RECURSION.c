#include<stdio.h>
int addDigit(long int num);
int main()
{
    long int num;
    int res=0,rem;
    printf("Enter your positive integer number:");
    scanf("%ld",&num);
    long int original=num;
    printf("\nSum of digit of %ld is %d.\n\n\n",original,addDigit(num));;
}
int addDigit(long int num)
{

  if(num>0)
{
    return num%10+addDigit(num/10);
}
return 0;
}
