#include<stdio.h>
#include<math.h>
void neonDetect(int num);
int main()
{
  int num;
  printf("Enter number:");
  scanf("%d",&num);
  neonDetect(num);
  printf("\n\n");
  return 0;
}
void neonDetect(int num)
{
    int value=pow(num,2);
    int rem,res=0;
    while(value>0)
    {rem=value%10;
     res+=rem;
     value/=10;
    }
    if(res==num)
    {
        printf("\n%d is neon number",num);
    }
    else
    {
        printf("%d is not neon number",num);
    }
}
