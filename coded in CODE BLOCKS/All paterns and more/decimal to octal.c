#include<stdio.h>

long long int converter(long long int num);
int main()
{
    long long int num;
    printf("Enter a DECIMAL num:");
    scanf("%lld",&num);
    printf("\n\n");
    printf("\n%lld(DECIMAL) --->%lld(OCTAL)\n\n",num,converter(num));
}
long long int converter(long long int num)
{
  long long int i=1,oct=0,rem;
  int step=1;
  while(num!=0){
    rem=num%8;
    printf("Step %d: %lld/8 ,  Remainder = %lld, Quotient = %lld\n", step++,num,rem,num/8);
    num/=8;
    oct+=rem*i;
    i*=10;

  }
return oct;
}


