#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers you want to write:");
    scanf("%d",&n);
    double num[n];
    printf("****ENTER THE NUMBERS****\n\n");
    for(int i=0;i<n;i++){

        printf("Enter No.%d--->",i+1);
        scanf("%lf",&num[i]);
    }
    for(int j=1;j<n;j++){
        if(num[0]<num[j]){
          num[0]=num[j];
        }
    }
    printf("\nThe GREATEST number is-->%.2lf\n\n",num[0]);
}
