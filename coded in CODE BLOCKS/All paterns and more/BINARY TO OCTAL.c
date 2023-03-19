#include<stdio.h>
#include<math.h>

long long int decimalconverter(long long int num);
long long int octalconverter(long long int num);
int main()
{
    long long int num;
    printf("Enter a BINARY num:");
    scanf("%lld",&num);
    printf("\n%lld(BINARY) --->%lld(OCTAL)\n\n",num,decimalconverter(num));
}
long long int decimalconverter(long long int num)
{
  int i=0,dec=0,rem;
  while(num!=0){
    rem=num%10;
    num/=10;
    dec+=rem*pow(2,i);
    i++;
}

return octalconverter(dec) ;
}
long long int octalconverter(long long int num)
{
  long long int i=1,oct=0,rem;
  int step=1;
  while(num!=0){
    rem=num%8;
    num/=8;
    oct+=rem*i;
    i*=10;

  }
return oct;
}
