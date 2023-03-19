// 2d ARRAY

#include<stdio.h>
void main()
{
    int i,b;

    int z[3][4]={ {4,1,3,4},
                {44,14,35,44},
                   {45,541,55,465},
    };

    for(i=1;i<=3;i++)
    {
        for(b=1;b<=4;b++)
        {
            printf("%d ",z[i-1][b-1]);
        }
        printf(" \n");
    }




}
