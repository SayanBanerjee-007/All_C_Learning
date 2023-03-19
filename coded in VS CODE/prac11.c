#include <stdio.h>

int main()
{
    char arr[100];
    int c = 0;

    do
    {
        arr[c] = getchar();
        c++;
    } while (arr[c - 1] != '\n');
    arr[c] = '\0';

    printf("%s\n\n", arr);

    return 0;
}