#include<stdio.h>
#include<math.h>
void nivenDetect(int num);
int main()
{
  int num;
  printf("Enter number:");
  scanf("%d",&num);
  nivenDetect(num);
  printf("\n\n");
  return 0;
}
void nivenDetect(int num)
{
    int original=num;
    int rem,res=0;
    while(num>0)
    {rem=num%10;
     res+=rem;
     num/=10;
    }

    if(original%res==0)
    {
        printf("\n%d is niven number",original);
    }
    else
    {
        printf("%d is not niven number",original);
    }
}

