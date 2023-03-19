#include<stdio.h>
int fib(int r);
int main(){
    int num;

    printf("Enter limit :");
    scanf("%d",&num);
    printf("\nFibonacci series of(%d):\n-->",num);
    printf("%d,%d",0,1);
    fib(num);

    return 0;
}
int fib(int r){

    int res,i,a=0,b=1;

    for(i=1;i<=(r-2);i++){
    res=a+b;
    printf(",%d",res);
    a=b;
    b=res;
    }
    printf("\n\n");
}
