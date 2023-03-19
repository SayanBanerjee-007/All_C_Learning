/*
333
22
1
*/

#include<stdio.h>
int main()
{
    int row,lim,i,j;
    printf("Enter row num :");
    scanf("%d",&row);

    printf("\n\n");
       for(i=row;i>=0;i--)
        {
        for(j=1;j<=i;j++)
              {

                 printf("%d \t",i);
              }

        printf("\n\n");
    }

 return 0;
}
