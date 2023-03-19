#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char str[20], tem;
    printf("Enter your string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for (i = 0; i <= (len / 2) - 1; i++)
    {
        tem = str[i];
        str[i] = str[len - 1 - i];
        str[len-1-i] = tem;
    }

    printf("%s\n", str);

    return 0;
}