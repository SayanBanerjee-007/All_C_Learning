#include<stdio.h>

int main()
{
       int arr1[7],arr2[2];
       int n=(sizeof(arr1)+sizeof(arr2))/4;
       int arrRes[n];

        printf("FIRST ARRAY\n");
        for(int j=0;j<7;j++){
              printf("Enter %dNo. element-->",j+1);
              scanf("%d",&arr1[j]);
    }
        printf("\n\nSECOND ARRAY\n");
        for(int j=0;j<2;j++){
             printf("Enter %dNo. element-->",j+1);
              scanf("%d",&arr2[j]);
    }

       for(int j=0;j<n;j++){
             if(j<7){
             arrRes[j]=arr1[j];}
             else{
             arrRes[j]=arr2[j];}
    }




        for(int j=0;j<n;j++){
              printf("%d\t",arrRes[j]);
    }
    printf("\n\n");

}
