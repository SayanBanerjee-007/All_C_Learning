#include<stdio.h>

int main()
{
    char str[15]="United Kingdom";
    printf(" 123456789012345\n------------------\n");
    printf("1%15s\n",str);
    printf("2%5s\n",str);
    printf("3%20.10s\n",str);
    printf("4%-15s\n",str);
    printf("5%-15.6s\n",str);
    printf("6%15.0s\n",str);
    printf("7%.3s\n",str);
    printf("8%s\n",str);
    return 0;
}