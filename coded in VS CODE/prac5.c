/*#include<stdio.h>

int main()
{
    int i=0;
    char city[]={'N','E','W',' ','Y','O','R','K','\0'};
    while(city[i]!='\0')
    {
        putchar(city[i]);
        i++;
    }
    printf("\n");
  
    return 0;
}*/
#include <stdio.h>

int main()
{
    int i = 0;
    char city[9];
    do
    {
        printf("Enter No.%d character: ", i + 1);
        fflush(stdin);
        scanf("%c", &city[i]);
        i++;
    } while (city[i - 1] != '\n');

    city[i] = 0;
    i=0;
    while(city[i]!='\0')
    {
        putchar(city[i]);
        i++;
    }
    printf("\n");
    

    return 0;
}