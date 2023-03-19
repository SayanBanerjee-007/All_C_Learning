#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *x=&a,*y=&b;
   // int res=(x+y);
    printf("Address of X-->%d\n",x);
    printf("Address of X-->%d\n",y);
    int q=x,w=y;
    printf("\n\nsum of X and Y is -->%d",q+w);
    printf("\n\n");
}
