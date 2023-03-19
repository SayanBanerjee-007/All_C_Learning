
/*
1
12
123
*/
#include<stdio.h>
int main()
{
    int row,lim,i,j;
    printf("Enter row num :");
    scanf("%d",&row);

    printf("\n\n");
       for(i=1;i<=row;i++)
        {
        for(j=1;j<=i;j++)
              {

                 printf("%d \t",j);
              }

        printf("\n\n");
    }

 return 0;
}
