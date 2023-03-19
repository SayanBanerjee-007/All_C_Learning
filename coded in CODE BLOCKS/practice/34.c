#include<stdio.h>
int main()
{
    int slim,elim,rem,i,sum=0,copy;
    printf("Enter starting limit: ");
    scanf("%d",&slim);
    printf("Enter ending limit: ");
    scanf("%d",&elim);
    printf("\n\n");

    for(i=slim;i<=elim;i++){
    copy=i;
    while(copy!=0)
    {
       rem=copy%10;
       sum=sum*10+rem;
       copy=copy/10;
    }
    if(i==sum)
    {
        printf("%d is palindrome number.\n",i);
    }
    sum=0;
    }


    return 0;
}
