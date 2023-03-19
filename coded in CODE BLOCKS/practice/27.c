#include<stdio.h>
int main()
{
    int a,b,c,res,res2;
    printf("Enter value of a--->");
    scanf("%d",&a);
    printf("Enter value of b--->");
    scanf("%d",&b);
    printf("Enter value of c--->");
    scanf("%d",&c);

//    printf("GREATEST NUMBER IS ---> ");
//    if(a>b&&a>c)
//    {
//        printf("%d",a);
//    }else if(b>c)
//    {
//        printf("%d",b);
//    }else
//    {
//        printf("%d",c);
//    }

    res=(a>b&&a>c)?a:(b>c)?b:c;
    //printf("%d",res);
    if(res==a)
    res2=b+c;
    else if(res==b)
    res2=a+c;
    else if(res==c)
    res2=a+b;

    if(res2>res)
    printf("The TRIANGLE will form.");
    else
    printf("The TRIANGLE will not form.");
    printf("\n\n\n");
    return 0;
}
