#include<stdio.h>
void typeDec(int *arr,int n);
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Enter INTEGER No.%d number-->",i+1);
        scanf("%d",&arr[i]);
    }
    typeDec(arr,n);

}
void typeDec(int *arr,int n)
{
    int pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
         pos++;
        }if(arr[i]<0){
        neg++;
        }if(arr[i]==0){
        zero++;
        }
    }
    printf("\n\n");
    printf("Number of POSITIVE integer-->%d\n",pos);
    printf("Number of NEGITIVE integer-->%d\n",neg);
    printf("Number of ZERO integer-->%d\n",zero);
    printf("\n\n");
}
