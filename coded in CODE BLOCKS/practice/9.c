#include<stdio.h>
int cal(int n)
{
    int a=0,b=1,i,res;
    if(n==1)
    {printf("%d,",a);
     return 0;  }
    else if(n==2)
    {printf("%d,",a);
     printf("%d,",b);
     return 0;
    }else
    {
         printf("%d,",a);
         printf("%d,",b);

    }
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

    printf(".......\n\n\n");
    jump:
    return 0;
}
