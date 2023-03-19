#include<stdio.h>
int main()
{
    long long int num,count=0;
    printf("Enter an integer number:");
    scanf("%lld",&num);
    for(num;num>0; num/=10,count++){}
    printf("\nThe number you have entered has--> %lld digits\n",count);
}
