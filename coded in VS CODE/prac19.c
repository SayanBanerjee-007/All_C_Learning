#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    //char ch[20];
    //printf("Enter a srting: ");
    //scanf("%s",ch);
    //for(int i=0;i<strlen(ch);i++)
    //{
    //  printf("%*.*s\n",i+1,1,ch);
    //}

    char str[20];
    int len;
    printf("Enter an integer: ");
    scanf("%s",str);
    //len=strlen(num);
    //int *ptr=malloc(len*sizeof(int));
    //    
    //for(int i=0;i<len;i++)
    //{
    //    ptr[i]=num[i]-48;
    //}
    //for(int i=0;i<len;i++)
    //{
    //printf("%d",ptr[i]);
    //}printf("\n");
    //free(ptr);
    int number= atoi(str);
    printf("%d\n",number);
    

    return 0;
}