#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,length;
    char str[20];
    printf("Enter any word you want: ");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        //for(int j=0;j<=i;j++)
        //{
        //    printf("%c",str[j]);
        //}printf("\n");
        printf("%*.*s\n",i+1,i+1,str);
    }
    for(i=length-1;i>=0;i--)
    {
        //for(int j=0;j<=i;j++)
        //{
        //    printf("%c",str[j]);
        //}printf("\n");
        printf("%*.*s\n",i+1,i+1,str);
    }
    printf("%d\n\n",length);

    return 0;
}