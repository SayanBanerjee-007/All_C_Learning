#include<stdio.h>

typedef struct vector{

    int x;
    int y;
}vec;
vec vectorSum(vec v[],int n)
{
   vec result={0};
   for(int i=0;i<n;i++){
   result.x+=v[i].x;
   result.y+=v[i].y;
}
   return result;
}
int main()
{
    int n;
    printf("Enter numbers of complex numbers: ");
    scanf("%d",&n);
    vec v[n],sum;
    for(int i=0;i<n;i++){
        printf("\nEnter No.%d value of X: ",i+1);
        scanf("%d",&v[i].x);
        printf("Enter No.%d value of Y: ",i+1);
        scanf("%d",&v[i].y);
    }

    sum=vectorSum(v,n);

    printf("\nsum of X is %d and sum of Y is %d\n\n\n",sum.x,sum.y);
}

