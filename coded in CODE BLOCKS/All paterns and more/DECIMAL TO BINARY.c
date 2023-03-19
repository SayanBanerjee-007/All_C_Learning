#include<stdio.h>

long long int converter(long long int num);
int main()
{
    long long int num;
    printf("Enter a DECIMAL num:");
    scanf("%lld",&num);
    printf("\n");
    printf("\n%lld(DECIMAL) --->%lld(BINARY)\n\n",num,converter(num));
}
long long int converter(long long int num)
{
  long long int i=1,bin=0,rem;
  int step=1;
  while(num!=0){
    rem=num%2;
    printf("Step %d: %lld/2 ,  Remainder = %lld, Quotient = %lld\n", step++,num,rem,num/2);
    num/=2;
    bin+=rem*i;
    i*=10;

  }
return bin;
}

