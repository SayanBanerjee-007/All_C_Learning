#include<stdio.h>
#include<math.h>

long long int decimalconverter(long long int num);
long long int binaryconverter(long long int num);
int main()
{
    long long int num;
    printf("Enter a OCTAL num:");
    scanf("%lld",&num);
    printf("\n%lld(OCTAL) --->%lld(BINARY)\n\n",num,decimalconverter(num));
}
long long int decimalconverter(long long int num)
{
  int i=0,dec=0,rem;
  while(num!=0){
    rem=num%10;
    num/=10;
    dec+=rem*pow(8,i);
    i++;
}

return binaryconverter(dec) ;
}
long long int binaryconverter(long long int num)
{
  long long int i=1,bin=0,rem;
  int step=1;
  while(num!=0){
    rem=num%2;
    num/=2;
    bin+=rem*i;
    i*=10;

  }
return bin;
}

