#include<stdio.h>
main()
{
int n,rem,rev=0,m;
printf("Enter the number :");
scanf("%d",&n);
m=n;
while (n!=0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if(m==rev)
    {printf("The number %d is palindrom", rev);}
    else
    {printf("The number : %d is not palindrom \nAnd its reversed number is : %d",n,rev);}
return 0;





}
