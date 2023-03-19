
/*
123
12
1
*/

#include<stdio.h>
int main()
{
    char i,j;
    char row,alph='A';
    printf("Enter a uppercase character :");
    scanf("%c",&row);

    printf("\n\n");
       for(i=1;i<=(row-'A'+1);i++)
        {
        for(j=1;j<=(row-'A'+1);j++)
              {

                 printf("%c  ",alph);
              }
              alph++;

        printf("\n\n");
    }

 return 0;
}
