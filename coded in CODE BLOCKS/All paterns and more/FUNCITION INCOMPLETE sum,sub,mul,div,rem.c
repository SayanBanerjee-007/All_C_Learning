#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int rem(int a,int b);

int main()
{  printf("Enter two number : \n");

   int c=sub(4,1);
   printf("%d",c);
  return 0;
}
int sum(int a,int b)
{
   int reasult=a+b;
   return reasult;
}
int sub(int a,int b)
{
   int reasult=a-b;
   return reasult;
}
int mul(int a,int b)
{
   int reasult=a*b;
   return reasult;
}
int div(int a,int b)
{
   int reasult=a/b;
   return reasult;
}
int rem(int a,int b)
{
   int reasult=a% b;
   return reasult;
}
