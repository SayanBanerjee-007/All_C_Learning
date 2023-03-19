#include<stdio.h>
int main()
{
    FILE *ptr;
    int n;
//    ptr=fopen("ex.txt","r");    this will print the value
        ptr=fopen("exa.txt","r");  // print the else value
    if(ptr!=NULL){
    fscanf(ptr,"%d",&n);
    printf("The vale of n is %d\n\n",n);
    }else{
    printf("This file does not exist.\n\n");
    }
    //while u write new things in file u have to save it..


    return 0;
}

