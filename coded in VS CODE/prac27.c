#include<stdio.h>

int main()
{
    for ( int i2 = 0; i2 < 5; i2++)
    {
    static int n =0;
    for(int i=0;i<10;i++)
    {
        printf("%d %10d\n",i,n);
        n++;
    }
    printf("\n\n");
    }
    return 0;
}