#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("Enter No.%d integer value: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("No.%d value ---> %d\n",i+1,ptr[i]);
    }

    ptr=(int*)realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        printf("Enter No.%d integer value: ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}



