#include<stdio.h>
int main()
{
    FILE *ptr;
    int n;
    ptr=fopen("value.txt","r");
    fscanf(ptr,"%d",&n);
    ptr=fopen("value.txt","w");
    fprintf(ptr,"%d",n*2);
    fclose(ptr);
    return 0;
}
