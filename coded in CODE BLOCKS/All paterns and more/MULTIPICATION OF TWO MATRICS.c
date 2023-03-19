#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter ROW numbers :");
    scanf("%d",&row);
    printf("Enter COLUMN numbers :");
    scanf("%d",&column);

    printf("\n\n****FIRST MATRIC****\n");
    double arr1[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("ROW No.%d and COLUMN No.%d number-->",i+1,j+1);
              scanf("%lf",&arr1[i][j]);
    }printf("\n");
}
    printf("\n\n****SECOND MATRIC****\n");
    double arr2[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("ROW No.%d and COLUMN No.%d number-->",i+1,j+1);
              scanf("%lf",&arr2[i][j]);
    }printf("\n");
}
    double arrRes[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
             arrRes[i][j]=arr1[i][j]*arr2[i][j];
    }
    printf("\n\n");
}

     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("%.2lf*%.2lf\t",arr1[i][j],arr2[i][j]);
    }
    printf("\n\n");
}
     printf("----------------------------------------------");
     printf("\n\n");
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("%.2lf\t",arrRes[i][j]);
    }
    printf("\n\n");
}
}

