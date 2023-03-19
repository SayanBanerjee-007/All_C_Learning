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
        printf("%d ",i);
    }
    printf("\n");
   }
   for(int i=(num-1);i>=1;i--){

    for(int j=num;j>i;j--){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("%d ",i);
    }
    printf("\n");
   }

}

