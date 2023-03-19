#include<stdio.h>

int main()
{
    int length=0,i=0;
    char str1[50]="Sayan";
    char str2[]=" Banerjee";
    while(str1[length]!=0){
        length++;
    }
    while(str2[i]!=0){
        str1[length]=str2[i];
        length++;
        i++;
    }
    printf("%s\n",str1);


    return 0;
}