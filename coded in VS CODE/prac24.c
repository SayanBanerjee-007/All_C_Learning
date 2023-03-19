#include <stdio.h>

int main()
{
    int len = 0;
    char str1[20], str2[20];
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    fflush(stdin);
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    while (str1[len] != 0 && str2[len] != 0)
    {
        len++;
        if (str1[len] != str2[len])
        {
            goto jump;
        }
    }
jump:
    if (str1[len] < str2[len])
    {
        printf("Value -> -1\n");
    }
    else if (str1[len] > str2[len])
    {
        printf("Value -> 1\n");
    }
    else
    {
        printf("Value -> 0\n");
    }

    return 0;
}