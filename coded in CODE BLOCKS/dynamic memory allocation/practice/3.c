#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    ptr = calloc(6,sizeof(char));

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

    ptr=realloc(ptr,10*sizeof(char));
    for(int i=0;i<10;i++)
    {
    if(ptr!=NULL){
    printf("\nEnter No.%d character: ",i+1);
    fflush(stdin);
    scanf("%c",&ptr[i]);
    } }

    for(int i=0;i<10;i++)
    {
    printf("\nNo.%d value is ----> %c \n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}

