#include<stdio.h>

main()
{
    int m,n,s=0,r;
    printf("\nEnter Number : ");
        scanf("%d",&n);
    m=n;
    while(m>0)
    {
        r=m%10;
        s=s+r;
        m/=10;

    }
    printf("Sum of Digit %d\t",s);
    return 0;
}
