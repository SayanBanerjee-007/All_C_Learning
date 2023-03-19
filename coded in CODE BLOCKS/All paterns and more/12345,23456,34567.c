
/*
12345
23456
34567
45648
56789
*/
#include<stdio.h>
int main()
{
    int lim,i,j;

    printf("\nEnter limit :");
    scanf("%d",&lim);

    printf("\n\n");
    for(i=1;i<=lim;i++)
    {
        for(j=i;j<i+lim;j++)
        {

            printf("%d ",j);
        }

        printf("\n\n");
    }

    return 0;
}
