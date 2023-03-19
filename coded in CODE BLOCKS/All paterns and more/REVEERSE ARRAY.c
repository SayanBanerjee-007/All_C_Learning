#include<stdio.h>
void reverse(int *arr,int n);
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Enter No.%d number-->",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("The value of %d element before swaping--> %d\n",i+1,arr[i]);
    }
    reverse(arr,n);
    printf("\n\n");
    for(int i=0;i<n;i++){
        printf("The value of %d element after swaping--> %d\n",i+1,arr[i]);
    }
    printf("\n\n");
}
void reverse(int *arr,int n)
{
  for(int i=0;i<n/2;i++){
    arr[i]=arr[i]+arr[n-i-1]-(arr[n-i-1]=arr[i]);
}
}
