#include<stdio.h>
int main()
{
    int row,column,Mnum;
    printf("Enter ROW numbers :");
    scanf("%d",&row);
    printf("Enter COLUMN numbers :");
    scanf("%d",&column);
    printf("Enter MARTIC numbers :");
    scanf("%d",&Mnum);

    for(int m=1;m<=Mnum;m++){
    double arr[row][column];
    double *p=&arr[row][column];
    printf("\n\n****No.%d MATRIC****\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("ROW No.%d and COLUMN No.%d number-->",i+1,j+1);
              scanf("%lf",&*(*(arr+j)+i));
    }printf("\n");
}arr[row][column]=*++p;
}

 /*   double arrRes[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
             arrRes[i][j]=arr1[i][j]+arr2[i][j];
    }
    printf("\n\n");
}

     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              printf("%.2lf+%.2lf\t",arr1[i][j],arr2[i][j]);
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
}*/
}

