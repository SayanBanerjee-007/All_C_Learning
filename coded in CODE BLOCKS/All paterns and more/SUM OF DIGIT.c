#include<stdio.h>
int main()
{
    int num,res=0,m,r;
    printf("Enter your number :\n");
    scanf("%d",&num);
    m=num;
   while(m>=0){
        r=m%10;
        res+=r;
        m/=10;
    }

    printf("%d is Sum of digit of-->%d",num,res);

return 0;



}
