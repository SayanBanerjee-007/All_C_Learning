#include<stdio.h>
int main()
{
    int n,count=1,flag=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++){
         printf("Enter element No.%d -->",i+1);
            scanf("%d",&arr[i]);
    }
    printf("\n****Array elements****\n\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }printf("\n\n****OCCURRANCE****\n\n");

      for(int i=0;i<n;i++){
         if(i!=0){
         for(int k=(i-1);k>=0;k--){
            if(arr[k]==arr[i]){
                flag=1;
            }
         }
    }
         if(flag==0){
         for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
         }

         printf("%d ----> %d times.\n",arr[i],count);
         count=1;
         }
         flag=0;
    }
     printf("\n\n\n");
     return 0;
}
