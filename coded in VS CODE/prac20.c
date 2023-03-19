#include <stdio.h>

int main()
{
    char fname[10] = "Suman", mname[10] = "Kumar", lname[10] = "Ghosh";
    char name[30];
    int i, j, k;
    for (i = 0; fname[i] != 0; i++)
    {
        name[i] = fname[i];
    }
    name[i] = ' ';
    for (j = 0; mname[j] != 0; j++)
    {
        name[i + j + 1] = mname[j];
    }
    name[i + j + 1] = ' ';
    for (k = 0; mname[k] != 0; k++)
    {
        name[i + j + k + 2] = lname[k];
    }
    name[i + j + k + 2] = 0;
    printf("%s\n", name);

    return 0;
}