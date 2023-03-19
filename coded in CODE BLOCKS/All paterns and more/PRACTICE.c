#include<stdio.h>
int main()
{
    int n;
    char arr[50],c;
    int sum=0,id=0;
    printf("\nEnter your sentence: \n");
    gets(arr);
    c=arr[id];
    while(c!='\0')
    {
        sum++;
        id++;
        c=arr[id];
    }
    printf("%d",sum);
    return 0;
}
