#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    ptr = calloc(6,sizeof(float));

    for(int i=0;i<6;i++)
    {
    if(ptr!=NULL){
    printf("\nEnter No.%d character: ",i+1);
    fflush(stdin);
    scanf("%c",&ptr[i]);
    } }

    for(int i=0;i<6;i++)
    {
    printf("\nNo.%d value is ----> %c \n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}

