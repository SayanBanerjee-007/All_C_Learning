/*
1111
2222
3333
*/
#include<stdio.h>
int main()
{
    int row,lim,i,j;
    printf("Enter row num :");
    scanf("%d",&row);
    printf("\nEnter limit :");
    scanf("%d",&lim);
    printf("\n\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=lim;j++)
        {

            printf("%d \t",i);
        }


        printf("\n\n");
    }

    return 0;
}
