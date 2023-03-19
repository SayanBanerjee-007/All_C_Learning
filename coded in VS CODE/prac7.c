#include <stdio.h>

int main()
{
    int i = 0;
    char ch[10], *ptr;
    ptr = ch;
    do
    {
        printf("Enter ----> ");
        fflush(stdin);
        ptr[i] = getchar();
        i++;
    } while (ptr[i - 1] != '\n');

    ptr[i] = 0;
    i = 0;
    while (ptr[i] != 0)
    {
        putchar(ptr[i]);
        i++;
    }
    printf("\n\n");
    return 0;
}