#include<stdio.h>
main()
{
int n,rem,rev=0,m,start,end;

printf("Enter limit :");
scanf("%d%d",&start,&end);
printf("The palindrom number are : \n");

for(m=start;m<=end;m++)
 { n=m;
     while(n!=0)
    {rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;}

       if(m==rev)
    {printf("%d \n", rev);}
rev=0;
}

return 0;
}
