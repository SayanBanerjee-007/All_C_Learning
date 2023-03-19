#include<stdint.h>
int add(int n)
{
    if(n==0)
    {
        return 0;
    }else
    {
        return n%10+add(n/10);
    }
}
int main()
{
    int num,rem,res=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    res=add(num);
    printf("Enter sum of digit: %d",res);
    return 0;
}
