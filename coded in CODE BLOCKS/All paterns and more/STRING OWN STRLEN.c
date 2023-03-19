#include<stdio.h>
int strlen(char *ptr)
{
    int count=0;
    while(*ptr!='\0'){
        if(*ptr!=' ')
        {count++;}
        ptr++;
    }
    return count;
}
int main()
{
    int n;
    printf("How many word you want to type:");
    scanf("%d",&n);
    char arr[n];
    fflush(stdin);
    printf("****Enter your words****\n\n");
    gets(arr);
    int len=strlen(arr);

    printf("\n\nNumber of alphabet --->%d\n\n",len);

}
