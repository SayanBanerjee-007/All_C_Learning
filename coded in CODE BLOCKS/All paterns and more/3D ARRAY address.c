#include<stdio.h>
int main()
{
    int a,b,c;
    printf("How many times:");
    scanf("%d",&a);
    printf("How many rows:");
    scanf("%d",&b);
    printf("How many column:");
    scanf("%d",&c);
    short n=1;

    double num[a][b][c];
    printf("****ENTER THE NUMBERS****\n\n");

    for(int z=0;z<a;z++){
    for(int j=0;j<b;j++){
    for(int i=0;i<c;i++,n++){
        printf("Enter No.%d--->",n);
        scanf("%lf",&num[z][j][i]);
    }
    }
    }
     printf("\n");
    for(int z=0;z<a;z++){
    for(int j=0;j<b;j++){
    for(int i=0;i<c;i++,n++){
        printf("array[%d][%d][%d]No.%d(ADDRESS=%d)--->%.2lf\n",z,j,i,n,&num[z][j][i],num[z][j][i]);

    }
    }
    }
    printf("\n\n\n");
}


