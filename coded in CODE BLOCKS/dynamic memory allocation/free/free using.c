#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,*ptr2;
    ptr=(int*)calloc(60,sizeof(int));


    for(int i=0;i<600;i++)
    {
        ptr2=(int*)calloc(600000,sizeof(int));
        printf("Enter a number: ");
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    return 0;
}


