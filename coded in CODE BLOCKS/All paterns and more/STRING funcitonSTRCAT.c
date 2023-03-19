#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="Sayan";
    char *str2=" Banerjee";
    strcat(str,str2);  //strcat(original,adding value);                               //--> ADVANCED type lol...
    printf("Now str2 is added to str-->%s.\n",str);



return 0;

}


