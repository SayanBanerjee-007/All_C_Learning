#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;

//    ptr=malloc(5*4);   ------>data types size is not always same in all arcitecture

    ptr=malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("Enter No.%d integer value: ",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
