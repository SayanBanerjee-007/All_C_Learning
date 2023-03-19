#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter limit: ");
    scanf("%d",&num);
    printf("\n");
    for(j=65;j<=65+num;j++){
    for(i=65;i<=65+num;i++)
    {
        printf("%c ",j);
    }printf("\n\n");
    }
}
