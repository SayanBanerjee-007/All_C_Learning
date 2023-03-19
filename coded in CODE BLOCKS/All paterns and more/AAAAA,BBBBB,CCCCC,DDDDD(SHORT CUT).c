#include<stdio.h>
int main()
{
    char i,j;
    char row;
    printf("Enter a uppercase character :");
    scanf("%c",&row);

    printf("\n\n");
       for(i=65;i<=row;i++)
        {
        for(j=65;j<=row;j++)
              {

                 printf("%c  ",i);
              }


        printf("\n\n");
    }

 return 0;
}
