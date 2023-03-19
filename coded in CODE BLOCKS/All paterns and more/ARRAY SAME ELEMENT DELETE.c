#include<stdio.h>
int main()
{
    int n,count=0,flag=0,k,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++){
         printf("Enter element No.%d -->",i+1);
            scanf("%d",&arr[i]);
    }
    printf("\nArray with duplicate elements\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }printf("\n");

    printf("\nArray without duplicate elements\n");
    for(int i=0;i<n;i++){
    for(int j=(i+1);j<n;j++){
        if(arr[i]==arr[j]){
              flag=1;
            }
        }
        if(flag==1){
            count++;
        }
        flag=0;
     }

    res=n-count,flag=0,k=(res-1);
    int arrRes[res];
    for(int i=(n-1);i>=0;i--){
    for(int j=(i-1);j>=0;j--){
        if(arr[i]==arr[j]){
          flag=1;
          }
    }   if(flag==0){
         arrRes[k]=arr[i];
               k--;
          }
         flag=0;
    }

    for(int i=0;i<res;i++){
        printf("%d\t",arrRes[i]);
    }

 printf("\n\n\n\n");
 return 0;
}
