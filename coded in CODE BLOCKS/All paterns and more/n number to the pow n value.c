#include<stdio.h>
#include<math.h>
void squre(int num);
int main()
{
  int num;
  printf("Enter limit:");
  scanf("%d",&num);
  squre(num);
  printf("\n\n");
  return 0;
}
void squre(int num)
{
  for(int i=1;i<=num;i++)
  {
     printf("\nThe squre of %d is %.0llf",i,pow(i,i));
  }

}

