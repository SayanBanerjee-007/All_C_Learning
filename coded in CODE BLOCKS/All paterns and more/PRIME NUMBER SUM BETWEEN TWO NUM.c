#include<stdio.h>
int main()
{
    int first,last,count=0,ULRES=0;
    printf("Enter first positive integer:");
    scanf("%d",&first);
    printf("Enter last positive integer:");
    scanf("%d",&last);
    printf("\n");
    int i,j,flag=1;
    for(i=first;i<=last;i++){
       for(j=2;j<=i/2;j++){
        if(i%j==0){
            flag=0;
        }
       }
       if(i<=1)
      {flag=0;}
       else if(flag==1)
       {
           printf("%d is a prime number\n",i);
           ULRES+=i;
           count++;
       }
       flag=1;
 }
 printf("\nThe sum prime number between %d and %d is %d\n\n",first,last,ULRES);
 printf("\nThe number of prime number between %d and %d is %d\n\n",first,last,count);
return 0;
}

