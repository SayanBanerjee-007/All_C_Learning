#include<stdio.h>
int main()
{
    char i,j;
    char row;
    printf("Enter a uppercase character :");
    scanf("%c",&row);

    printf("\n\n");
       for(i=65;i<=(int)row;i++)
        {
        for(j=65;j<=(int)row;j++)
              {

                 printf("%c  ",j);
              }


        printf("\n\n");
    }

 return 0;
}
