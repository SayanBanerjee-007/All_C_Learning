
#include<stdio.h>
int main()
{
int lim,i,j;

    printf("Enter row num :");
    scanf("%d",&lim);
     for (i = lim; i >0; i--) {
            for (j =i ; j <=lim ; j++) {
         printf(" ");
      }


    for(j=1;j<=i;j++)
              {
                 printf(" %d",i);

              }
    printf("\n");
}

return 0;
}
