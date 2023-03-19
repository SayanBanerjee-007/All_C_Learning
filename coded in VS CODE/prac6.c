/*#include<stdio.h>

int main()
{
    int i=0;
    char ch[]="sayan ban";
    while(ch[i]!=0)
    {
        putchar(ch[i]);
        i++;
    }
    printf("\n\n");
    return 0;
}*/
#include<stdio.h>

int main()
{
    int i=0;
    char ch[10];
    do
    {
        printf("Enter ----> ");
        fflush(stdin);
        ch[i]=getchar();
        i++;
    }while(ch[i-1]!='\n');

    ch[i]=0;
    i=0;
    while(ch[i]!=0)
    {
        putchar(ch[i]);
        i++;
    }
    printf("\n\n");
    return 0;
}