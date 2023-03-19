/*
1
21
321
4321
54321
*/
#include<stdio.h>
int main()
{
    int i,j,lim;
    printf("Entr limit :");
    scanf("%d",&lim);
    printf("\n\n");

     for(i=1;i<=lim;i++){

        for(j=i;j>=1;j--){
            printf(" %d",j);
        }
        printf("\n\n");
     }








}
