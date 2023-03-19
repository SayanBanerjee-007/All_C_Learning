#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;// this is needed for only one char  and also for the last type of FILE reading
    ptr=fopen("prac.txt","w");
    fputc('c',ptr);
    fclose(ptr);
    return 0;
}
