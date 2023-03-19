#include<stdio.h>

typedef struct vector{

    int x;
    int y;
}vec;
vec vectorSum(vec v1, vec v2)
{
   vec result;

   result.x=v1.x+v2.x;
   result.y=v1.y+v2.y;

   return result;
}
int main()
{
    vec v1,v2,sum={0};
    v1.x=4;
    v1.y=45;
    printf("x is %d and y is %d\n",v1.x,v1.y);
    v2.x=41;
    v2.y=415;
    printf("x is %d and y is %d\n",v2.x,v2.y);

    sum=vectorSum(v1,v2);

    printf("sum of X is %d and sum of Y is %d\n\n\n",sum.x,sum.y);
}
