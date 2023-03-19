#include<stdio.h>
int main()
{
   int num;
   printf("Enter column numbers:");
   scanf("%d",&num);
   for(int i=1;i<=num;i++){
    for(int j=num;j>i;j--){
        printf(" ");
    }

    for(int j=1;j<=i;j++){
        if(j==1||j==i)
        {printf("* ");}
        else
        {printf("  ");}
    }
    printf("\n");
   }
   for(int i=1;i<=num;i++){

    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int j=num;j>i;j--){
        if(j==num||j==(i+1))
        {printf("* ");}
        else
        {printf("  ");}
    }
    printf("\n");
   }

}
