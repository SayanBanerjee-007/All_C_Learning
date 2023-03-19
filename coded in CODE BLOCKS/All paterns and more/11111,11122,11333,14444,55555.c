/*
11111
11122
11333
14444
55555
*/
#include<stdio.h>
int main()
{
    int i,j,lim;
    printf("Entr limit :");
    scanf("%d",&lim);
    printf("\n\n");

     for(i=1;i<=lim;i++){
        for(j=lim;j>i;j--){
            printf(" 1");
        }
        for(j=1;j<=i;j++){
            printf(" %d",i);
        }
        printf("\n\n");
     }








}
