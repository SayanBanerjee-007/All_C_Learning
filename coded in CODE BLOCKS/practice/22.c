#include<stdio.h>
//#include<math.h>
int power(int b, int p);
int main()
{
    int startL,endL,i,j,count=0,temp,res=0,rem;
    printf("ARMSTRONG NUMBER PRINTER\n\nEnter starting limit: ");
    scanf("%d",&startL);
    printf("Enter ending limit: ");
    scanf("%d",&endL);
    for(i=startL;i<=endL;i++)
    { temp=i;
        while(temp!=0)
        {temp/=10;
         count++;}
       temp=i;
        while(temp!=0)
        {rem=temp%10;
         //res+=pow(rem,count);

         res+=power(rem,count);
         temp/=10;
        }
        if(i==res)
        {
            printf("\nArmstrong number-->%d",i);
        }
      res=0;
      count=0;
    }
    return 0;
}
int power(int b, int p)
{
 if(p==0)
 {
     return 1;
 }else
 {
     return b*power(b,p-1);
 }
}
