#include<stdio.h>
#include<string.h>
void Encrypt(char *str)
{


    while(*str!='\0')
    {
      *str=*str-1;
      str++;
    }

}
int main()
{
    char *str;
    printf("Enter your sentense:\n\n");
    gets(str);
    Encrypt(str);
printf("Decrypt sentense is:\n\n%s\n\n\n",str);
}

