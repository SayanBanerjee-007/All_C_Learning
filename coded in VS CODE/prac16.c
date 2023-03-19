#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0, length;
    char str[20];
    printf("Enter any word you want: ");
    scanf("%s", str);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        printf("%*.*s|\n", i + 1, 1, str);
    }
    for (i = length - 1; i >= 0; i--)
    {
        printf("%*.*s|\n", i + 1, 1, str);
    }
   
    return 0;
}