#include<stdio.h>
int prime(int num,int n)
{
if(n==1)
    return;
else{
        if(num%n==0)
        {return 0;}
        else
        {return prime(num,n-1);}
}

}
void main()
{
  int num;

  printf("Enter a positive integer number :");
  scanf("%d",&num);

    if(num==1)
    {
      printf("\n%d is neither PRIME nor COMPOSITE number\n\n",num);
       goto jump;
    }
    int n=num;
    num=prime(num,num/2);

    if(num==0)
    {
      printf("\nTHE NUMBER==%d IS NOT A PRIME NUMBER\n\n",n);
    }
    else
    {
        printf("\nTHE NUMBER==%d IS A PRIME NUMBER\n\n",n);
    }
    jump:
    return;

}

