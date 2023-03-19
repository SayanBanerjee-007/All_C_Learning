#include<stdio.h>
#include<math.h>
void neonPrinter(long int first,long int last);
int main()
{
  long int firstNum,lastNum;
  printf("Enter first number:");
  scanf("%ld",&firstNum);
  printf("Enter last number:");
  scanf("%ld",&lastNum);
  neonPrinter(firstNum,lastNum);
  printf("\n\n");
  return 0;
}
void neonPrinter(long int first,long int last)
{
    for(long int i=first;i<=last;i++){
    long int value=pow(i,2);
    long int rem,res=0;
    while(value>0)
    {rem=value%10;
     res+=rem;
     value/=10;
    }
    if(res==i)
    {
        printf("\n%ld is neon number",i);
    }

}
}
