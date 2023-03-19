#include<stdio.h>
int main()
{
   int res,num,i,a=0,b=1;

    printf("Enter limit :");
    scanf("%d",&num);
    printf("\nFibonacci series of(%d):\n-->",num);
    printf("%d,%d,",a,b);
    for(i=1;i<=(num-2);i++){

    res=a+b;
    printf("%d,",res);
    a=b;
    b=res;


    }
    printf("....\n\n\n");


    return 0;
}
