#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char name[50];
    ptr=fopen("myname.txt","r");
    fgets(name,50,ptr);
    char newname[10];
    strcpy(newname,name);
    fputs(newname,ptr);
    printf("%s",name);
    fclose(ptr);
    return 0;


}
