#include<stdio.h>
int main()
{
int i,j,lim;

     printf("Enter row num :");
     scanf("%d",&lim);
     printf("\n\n");

     for (i = lim; i >0; i--) {
      for(j=1;j<=(lim-i);j++){
        printf(" ");
      }

      for(j=1;j<=i;j++)
              {
                 printf(" *");
              }

    printf("\n");

     }
      for (i = 2; i <=lim; i++) {
      for ( j = lim; j>i; j--) {
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

