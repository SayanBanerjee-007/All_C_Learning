#include<stdio.h>
int power(int base,int po)
{
    if(po>1)
    {return power(base,po-1)*base;}
    else
        return 1;

}
int main()
{
    int base,po;
    printf("Enter the number:");
    scanf("%d",&base);
    printf("Enter power of the number:");
    scanf("%d",&po);
    printf("%d ^ %d = %d\n\n",base,po,power(base,po));
}

