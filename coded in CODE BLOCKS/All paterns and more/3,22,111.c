/*
3
22
111
*/

#include<stdio.h>
int main()
{
    int lim,i,j;
    printf("Enter limit :");
    scanf("%d",&lim);
    printf("\n\n");


    for(i=lim;i>=1;i--)
    {
        for(j=lim;j>=i;j--)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }

    return 0;



}
