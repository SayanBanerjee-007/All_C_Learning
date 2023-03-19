#include<stdio.h>
int main()
{
    int num,res=1;
    printf("Enter your number: ");
    scanf("%d",&num);

    for(int i=num;i>0;i--)
    {
        printf("%d * ",i);
        res=res*i;
    }
    printf("FACTORIAL OF %d IS ---> %d\n\n",num,res);
    return 0;
}
