#include<stdio.h>
int main()
{
  int num,i;

  printf("Enter a positive integer number :");
  scanf("%d",&num);
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0)
    {
      printf("\nTHE NUMBER==%d IS NOT A PRIME NUMBER\n\n",num);
      goto jump;
    }
  }
    if(num==1)
    {
      printf("\n1 is neither PRIME nor COMPOSITE number\n\n");
    }
    else
    {
        printf("\nTHE NUMBER==%d IS A PRIME NUMBER\n\n",num);
    }
    jump:
    return 0;

}
