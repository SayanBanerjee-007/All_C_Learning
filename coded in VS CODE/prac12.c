#include <stdio.h>

int main()
{
    int i = 0;
    char str1[50], str2[50];
    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    while(str1[i]!=0)
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]=0;
    printf("The string is : %s\n",str2);


    return 0;
}