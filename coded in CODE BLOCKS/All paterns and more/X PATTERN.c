#include<stdio.h>
int main()
{
    int lim,a=0;
    printf("Enter limit:");
    scanf("%d",&lim);
    int lim2=lim;
    int lim3=lim;
    for(int i=1;i<=lim;i++){

         for(int j=1;j<=i;j++){
            printf(" ");
         }
         for(int j=1;j<=1;j++){
            printf("%d",i );
         }
         for(int j=lim;j>i;j--){
            printf("  ");
         }
         for(int j=1;j<=1;j++){
           printf("%d",i);
         }

      printf("\n");

        }
     for(int i=1;i<=lim;i++){


         for(int j=lim;j>=i;j--){
            printf(" ");
         }
        for(int j=1;j<=1;j++,lim2--){
            printf("%d",lim2);
         }
        for(int j=1;j<i;j++){
            printf("  ");
         }
        for(int j=1;j<=1;j++,lim3--){
            printf("%d",lim3);
         }

      printf("\n");

     }



}

