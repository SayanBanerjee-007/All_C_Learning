#include<stdio.h>
int main()
{
    int n,count=0,flag=0,k,res;
    printf("Enter size of array: ");
    scanf("%d",&n);
    char arr[n];
    printf("\n");
    for(int i=0;i<n;i++){
         fflush(stdin);
         printf("Enter CHARACTER No.%d -->",i+1);
            scanf("%c",&arr[i]);
    }
    printf("\nArray with duplicate CHARACTER\n");
    for(int i=0;i<n;i++){
        printf("%c\t",arr[i]);
    }printf("\n");

    printf("\nArray without duplicate CHARACTER\n");
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
    char arrRes[res];
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
        printf("%c\t",arrRes[i]);
    }

 printf("\n\n\n\n");
 return 0;
}
