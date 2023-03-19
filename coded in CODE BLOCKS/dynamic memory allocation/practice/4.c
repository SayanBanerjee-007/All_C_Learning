#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=malloc(10*sizeof(int));
    printf("7 table till 10\n_______________\n\n");
    for(int i=0;i<10;i++)
    {
        ptr[i]=i+1;
        printf("7 X %d = %d \n\n",i+1,ptr[i]*7);
    }

    printf("\n\n7 table till 15\n_______________\n\n");
    ptr=realloc(ptr,15*sizeof(int));
    for(int i=0;i<15;i++)
    {
        ptr[i]=i+1;
        printf("7 X %d = %d \n\n",i+1,ptr[i]*7);
    }

    printf("\n\n");
    return 0;
}
