#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,row,col,k=0,temp;
    printf("Enter row numbers: ");
    scanf("%d",&row);
    printf("Enter column numbers: ");
    scanf("%d",&col);
    temp=row*col;
    arr=malloc(temp*sizeof(int));
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                printf("Enter RowNo.%d and ColumnNo.%d element: ",i+1,j+1);
                scanf("%d",&arr[k]);k++;
            }

    }
    printf("\nThe real Matrix: \n\n");
    for(int i=0;i<k;i++)
    {
        printf("%d\t",arr[i]);
        if((i+1)%col==0)
        {
            printf("\n\n");
        }
    }
    printf("\nThe transpose Matrix: \n\n");
    for(int i=0;i<col;i++)
    {
      for(int j=i;j<(col*(row-1))+i+1;)
      {
          printf("%d\t",arr[j]);
          if(j==(col*(row-1))+i){printf("\n\n");}
          j=j+5;
      }
    }
    printf("\n\n");
    free(arr);
    return 0;
}

