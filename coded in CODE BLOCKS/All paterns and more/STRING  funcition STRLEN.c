#include<stdio.h>
#include<string.h>
int main()
{
    char *str="Sayan";
    int length=strlen(str);                                  //--> ADVANCED type lol...
    printf("The length of string is %d.\n",length);

    int count=0;
    while(*str!='\0'){//-->old type lol...
       str++;
       count++;
    }
     printf("The length of string is %d.\n\n\n",count);

return 0;

}
