#include<stdio.h>
int cal(int n)
{
    if(n==1)
    return 0;
    return cal(n-1)+cal(n-2);
}
int main()
{
    int num,i,res;
    printf("Enter length of fibonacci series: ");
    scanf("%d",&num);
    if(num<1){
        printf("YOU HAVE ENTERED WRONG NUMBER.\nPLEASE TRY AGAIN.");
        goto jump;
    }
    printf("\nFibonacci series of(%d):\n-->",num);

    res=cal(num);

    printf("%d......\n\n\n",res);
    jump:
    return 0;
}
