#include<stdio.h>
int main()
{
    FILE *ptr;
    int n;
    ptr=fopen("ex.txt","r");
    fscanf(ptr,"%d",&n);
    printf("The vale of n is %d\n\n",n);

    //while u write new things in file u have to save it..


    return 0;
}

