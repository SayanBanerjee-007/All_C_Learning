/*
****
***
**
*
*/
#include<stdio.h>
int main()
{
    int lim,i,j;
    printf("Enter Limit :");
    scanf("%d",&lim);
    printf("\n\n");

    for(i=lim;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
      printf("\n\n");
    }
    printf("\n\n");


 return 0;
}
