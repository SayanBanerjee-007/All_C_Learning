#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==0)
    {
      printf("0 is nither odd nor even");
    }else if(num%2==0)
    {
      printf("Even");
    }else
    {
      printf("Odd");
    }

printf("\n\n\n");
}

