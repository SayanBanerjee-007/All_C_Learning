#include<stdio.h>

int main()
{
    char ch[10];
    printf("Enter :  ");
    scanf("%[^\n]",ch);
    puts(ch);
    return 0;
}