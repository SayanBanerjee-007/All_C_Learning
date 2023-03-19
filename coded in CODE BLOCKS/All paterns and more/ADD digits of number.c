#include<stdio.h>
int main()
{
    long int num;
    int res=0,rem;
    printf("Enter your positive integer number:");
    scanf("%ld",&num);
    long int original=num;
    while(num>0)
{
     rem=num%10;
     res+=rem;
     num/=10;
}
     printf("\nSum of digit of %ld is %d.\n\n\n",original,res);
}
