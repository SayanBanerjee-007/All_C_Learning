#include<stdio.h>
int main()
{
    int x=5,y=7;
    int tep;
    printf("x = %d , y = %d ",x,y);

    tep=x;
    x=y;
    y=tep;
    printf("\nx = %d , y = %d ",x,y);

}
