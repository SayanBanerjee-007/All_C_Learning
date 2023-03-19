#include<stdio.h>
int main()
{
    int year;
    printf("Enter Your Year: ");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        printf("%d is LEAP YEAR.",year);
    }else
    {
        printf("%d is NOT LEAP YEAR.",year);
    }

    printf("\n\n\n");
    return 0;
}
