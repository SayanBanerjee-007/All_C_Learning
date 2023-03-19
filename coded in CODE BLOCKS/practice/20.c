#include<stdint.h>
int main()
{
    int num,rem,res=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {rem=num%10;
     res+=rem;
     num/=10;
    }
    printf("Enter sum of digit: %d",res);
    return 0;
}
