#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 0, i;
    char str1[30], *str2;
    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    while (str1[length] != 0)
    {
        length++;
    }
    length--;

    str2 = malloc(length * sizeof(char));

    for (i = 0; i <= length; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = 0;

    printf("%s\n", str2);
    free(str2);

    return 0;
}