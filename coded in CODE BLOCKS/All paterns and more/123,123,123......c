/*
1111
2222
3333
*/
#include<stdio.h>
int main()
{
    int row,lim,i,j,num=1;
    printf("Enter row num :");
    scanf("%d",&row);
    printf("\nEnter limit :");
    scanf("%d",&lim);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=lim;j++)
        {

            printf("%d \t",num);
        }
        num++;

        printf("\n\n");
    }

    return 0;
}
