#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number---> ");
    scanf("%d",&num);

    num=num<10?0:1;
    printf("%d",num);
    return 0;
}

