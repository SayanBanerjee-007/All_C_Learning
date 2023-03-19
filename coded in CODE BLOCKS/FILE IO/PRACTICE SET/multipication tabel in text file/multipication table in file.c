#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("multipication table.txt","w");
    int row,column;
    printf("Enter ROW numbers :");
    scanf("%d",&row);
    printf("Enter COLUMN numbers :");
    scanf("%d",&column);


    int arr1[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        arr1[i][j]=i+1;
       }
}
   int arr2[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
        arr2[i][j]=j+1;
        }
}
    int arrRes[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
             arrRes[i][j]=arr1[i][j]*arr2[i][j];
    }
}
    printf("\n");
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
              fprintf(ptr,"%d x %d = %d \t",arr2[i][j],arr1[i][j],arrRes[i][j]);
    }
    fprintf(ptr,"\n\n");
}
    fclose(ptr);
    return 0;
}

