#include<stdio.h>
int ten(int a);
int main()
{
    int num;
    printf("Enter your value:");
    scanf("%d",&num);
    printf("\nYour number is %d",num);
    ten(num);
    printf("\nYour number is %d",num);
}
int ten(int a)
{

     int res=a*10;
     a=100;

     printf("\nYour number after 10 times is %d",res);
     printf("\n\n");
     return a;
}

