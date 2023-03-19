#include<stdio.h>
void fib(int r);
int main(){
    int num;

    printf("Enter limit :");
    scanf("%d",&num);
    printf("\nFibonacci series of(%d):\n-->",num);

    if(num==0){
        printf("%d",0);
    return 0;
    }
    if(num==1||num>1){
    printf("%d,%d",0,1);
    }
    fib(num-2);

    return 0;
}
void fib(int r){
    static int res,a=0,b=1;
    if(r>1)
    {res =a + b;
     a = b;
     b = res;
    printf(",%d",res);
    fib(r-1);
    }

    printf("\n\n");
}
