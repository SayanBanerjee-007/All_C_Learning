#include<stdio.h>
int checkprimenum(int num);
int main()
{
  int num;
  printf("Enter a positive integer number :");
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
    if (checkprimenum(i) == 1) {

            if (checkprimenum(num - i) == 1) {
                printf("\n%d is sum of prime numbers %d and %d\n\n", num, i, num - i);
                goto jump;
            }
        }
  }

printf("%d cannot be expressed as the sum of two prime numbers.", num);

  jump:

  return 0;
}
int checkprimenum(int num)
{
  for(int i=2;i<=num/2;i++)
  {
    if(num%i==0||num==1)
    {
    continue;
    }

    else
    {
      return 1;
    }
}
}
