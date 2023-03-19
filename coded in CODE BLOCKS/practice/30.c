#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    printf("Enter limit(from a to z): ");
    scanf("%c",&ch);
    printf("\n\n");
    for(i=97;i<=(int)ch;i++)
    {
     for(j=97;j<=i;j++)
      {printf("%c ",j);}


    printf("\n\n");
    }

    return 0;
}
