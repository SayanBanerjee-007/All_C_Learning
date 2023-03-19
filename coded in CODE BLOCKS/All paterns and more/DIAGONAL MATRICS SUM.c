#include<stdio.h>
int main()
{
    int lim;
    printf("Enter limit numbers :");
    scanf("%d",&lim);
    double arr1[lim][lim],sum=0;

    for(int i=0;i<lim;i++){
        for(int j=0;j<lim;j++){
              printf("ROW No.%d and COLUMN No.%d number-->",i+1,j+1);
              scanf("%lf",&arr1[i][j]);
    }printf("\n");
}

    for(int i=0;i<lim;i++){
        for(int j=0;j<lim;j++){
        if((i+j)==(lim-1)||i==j)
       {
         printf("%.2lf  ,",arr1[i][j]);
         sum+=arr1[i][j];
       }
    }

}
      printf("\n\nSum of diagonal elements is %.2lf\n\n\n\n",sum);
}


