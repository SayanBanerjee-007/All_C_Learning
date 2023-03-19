#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,num,count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n],*arr1;

    for(int i=0;i<n;i++){
        printf("Enter No.%d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Before deleting the element:\n\n");
    for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }
    printf("\n\n");

    printf("Enter the element you want to delete: ");
    scanf("%d",&num);

    for(int i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
   // int arr1[n-count];
    arr1=malloc((n-count)*sizeof(int));
    printf("After deleting the element:\n\n");
    for(int i=0,j=0;i<n;i++){
       if(arr[i]!=num){
       arr1[j]=arr[i];
       printf("%d\t",arr1[j]);
       j++;
       }
   }
    free(arr1);
    printf("\n\n\n");
    return 0;
}

