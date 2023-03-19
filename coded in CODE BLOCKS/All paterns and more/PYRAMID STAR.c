
#include<stdio.h>
int main()
{
int i,j,row,space;

     printf("Enter row num :");
    scanf("%d",&row);
     printf("\n");

     for (i = 1; i <=row; i++) {
      for (space = 1; space <= row - i; ++space) {
         printf(" ");
         }

    for(j=1;j<=i;j++)
              {
                 printf(" *");

              }
    printf("\n");

     }
     return 0;
}
