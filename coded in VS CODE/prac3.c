#include<stdio.h>

int main()
{
    char c='A';
    FILE *ptr;
    ptr=fopen("prac3.txt","w");
    putc(c,ptr);
    fclose(ptr);
    ptr=fopen("prac3.txt","r");
    char ch=getc(ptr);
    fclose(ptr);
    printf("%c",ch);

    printf("\n\n\n");
    return 0;
}