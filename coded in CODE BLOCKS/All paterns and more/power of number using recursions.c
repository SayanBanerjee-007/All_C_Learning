#include<stdio.h>
int power(int base,int pow);
int main()
{
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}
int power(int base,int pow)
{
    if(pow!=0)
    {
      return base*power(base,pow-1);
    }
    else
    {
       return 1;
    }
}
