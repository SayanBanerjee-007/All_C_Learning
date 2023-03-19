#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter how many integers you wan to write: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("Enter No.%d integer value: ",i+1);
        scanf("%d",&ptr[i]);
    }


    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}


