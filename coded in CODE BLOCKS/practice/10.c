#include<stdio.h>
int main()
{
    int num,a=0,b=1,i,res;
    printf("Enter length of fibonacci series: ");
    scanf("%d",&num);
    if(num<1){
        printf("YOU HAVE ENTERED WRONG NUMBER.\nPLEASE TRY AGAIN.");
        goto jump;
    }
    printf("\nFibonacci series of(%d):\n-->",num);
    if(num==1)
    {printf("%d,",a);   }
    else if(num==2)
    {printf("%d,",a);
     printf("%d,",b);
    }else {

     printf("%d,",a);
     printf("%d,",b);

    for(i=3;i<=num;i++){
        res=a+b;
        a=b;
        b=res;
        printf("%d,",res);
    }
}

     printf(".......\n\n\n");
     jump:
     return 0;
}
