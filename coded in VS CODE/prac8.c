#include<stdio.h>

int main()
{
    char *ch = "sayan ban";
    printf("%s\n",ch);
    char ptr[10];//*ptr cannot take character array input..LOL
    printf("Enter your string:  ");
    gets(ptr);
    printf("\nThe string is: %s\n\n",ptr);
    return 0;
}