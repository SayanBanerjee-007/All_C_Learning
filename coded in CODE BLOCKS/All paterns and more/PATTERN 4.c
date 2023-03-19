#include<stdio.h>
int main()
{
    int lim;
    printf("Enter limit:");
    scanf("%d",&lim);

    for(int i=1;i<=lim;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }

         for(int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }

}
