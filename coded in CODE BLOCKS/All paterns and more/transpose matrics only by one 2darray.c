#include <stdio.h>
int main(){

   int row,column, i, j;
   printf("Enter rows :");
   scanf("%d",&row);
   printf("Enter column :");
   scanf("%d",&column);
   int matrix[row][column];

   for (i= 0; i < row; i++){
      for (j = 0; j < column; j++){
         printf("Enter no.%d element of column No.%d: ",j+1,i+1);
         scanf("%d", &matrix[i][j]);
   }
}
     printf("\nBefore Transpose of the matrix:\n");
    for (i= 0; i < row; i++){
      for (j = 0; j < column; j++){
         printf("%d\t",matrix[i][j]);

   }
   printf("\n");
}
   printf("\nTranspose of the matrix:\n");
   for (i = 0; i< column; i++) {
      for (j = 0; j < row; j++)
         printf("%d\t", matrix[j][i]);
      printf("\n");
   }
   printf("\n\n\n");
   return 0;
}
