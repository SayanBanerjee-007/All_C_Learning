#include<stdio.h>
#include<math.h>
void nivenDetect(int first,int last);
int main()
{
  int first,last;
  printf("Enter first number:");
  scanf("%d",&first);
  printf("Enter last number:");
  scanf("%d",&last);
  nivenDetect(first,last);
  printf("\n\n");
  return 0;
}
void nivenDetect(int first,int last)
{
    for(int i=first;i<=last;i++){
    int original=i;
    int rem=0,res=0;
    while(i>0)
    {rem=i%10;
     res+=rem;
     i/=10;
    }

    if(original%res==0)
    {
        printf("\n%d is niven number",original);
    }
i=original;
}

}
