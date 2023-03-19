#include<stdio.h>
int row,col;
void Display(double arr[row][col])
{
    double rowres=0,colres=0;
    printf("\n****SUM OF ROW AND COLUMN ELEMENTS****\n\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%.2lf\t",arr[i][j]);
            rowres+=arr[i][j];
         }
         printf("= %.2lf\n",rowres);
         rowres=0;
    }
    printf("________________________\n\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            colres+=arr[j][i];
         }
         printf("%.2lf\t",colres);
         colres=0;
   }

}
int main()
{

    printf("Enter row number: ");
    scanf("%d",&row);
    printf("Enter column number: ");
    scanf("%d",&col);
    double arr[row][col];

    printf("\n\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter row No.%d and Element No.%d -->",i+1,j+1);
            scanf("%lf",&arr[i][j]);
         }
         printf("\n");
    }
    Display(arr);
    printf("\n\n\n\n");
    return 0;
}

