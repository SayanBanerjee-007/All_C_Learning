#include<stdio.h>
void ten(int *a);
int main()
{
    int num;
    printf("Enter your value:");
    scanf("%d",&num);
    printf("\nYour number is %d",num);
    ten(&num);
}
void ten(int *a)
{

     int res=*a*10;
     printf("\nYour number after 10 times is %d",res);
     printf("\n\n");
}

