#include<stdio.h>
#include<string.h>
void strcopy(char *ptr,char *ptr1)
{
    int i=0;
    while(*ptr!='\0'){
        ptr1[i]=ptr[i];
        i++;
    }

}
int main()
{
    char str[]="sayan";

      char str1[5];

    strcopy(str,str1);

    printf("%s",str1);

}

