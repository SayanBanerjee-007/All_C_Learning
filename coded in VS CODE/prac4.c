#include<stdio.h>

int main()
{
    char c[]="Sayan";
    FILE *ptr;
    ptr=fopen("prac4.txt","w");
    fputs(c,ptr);
    fclose(ptr);
    ptr=fopen("prac4.txt","r");
    char ch[10];
    fgets(ch,10,ptr);
    fclose(ptr);
    printf("%s",ch);

    printf("\n\n\n");
    return 0;
}