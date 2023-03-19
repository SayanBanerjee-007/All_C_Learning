#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter ROW numbers :");
    scanf("%d",&row);
    printf("Enter COLUMN numbers :");
    scanf("%d",&column);
    double arr2[row][column];
    double arr1[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("ROW No.%d and COLUMN No.%d number-->",i+1,j+1);
              scanf("%lf",&arr1[i][j]);
    }printf("\n");
}

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        printf("%.2lf\t",arr1[i][j]);
    }
    printf("\n\n");
}
    for (int i = 0; i < row; ++i){
         for (int j = 0; j < column; ++j) {
         arr2[j][i] = arr1[i][j];
}
}
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < column; ++i){
         for (int j = 0; j < row; ++j) {
         printf("%.2lf\t", arr2[i][j]);

  }
printf("\n\n");
}
}

