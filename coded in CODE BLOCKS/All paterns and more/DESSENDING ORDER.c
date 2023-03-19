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
    printf("\n");
    printf("DESSENDING ORDER\n-->");
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(num[i]>num[j]){
          num[i]=num[i]+num[j]-(num[j]=num[i]);
        }

    }
    printf("%.2lf,",num[i]);
    }
    printf("\n\n");
}


