#include<stdio.h>
#include<math.h>

long long int converter(long long int num);
int main()
{
    long long int num;
    printf("Enter a BINARY num:");
    scanf("%lld",&num);
    printf("\n%lld(BINARY) --->%lld(DECIMAL)\n\n",num,converter(num));
}
long long int converter(long long int num)
{
  long long int i=0,dec=0,rem;
  int step=1;
  while(num!=0){
    rem=num%10;
    printf("Step %d: %lld/10 ,  Remainder = %lld, Quotient = %lld\n", step++,num,rem,num/10);
    num/=10;
    dec+=rem*pow(2,i);
    i++;

  }
return dec;
}
