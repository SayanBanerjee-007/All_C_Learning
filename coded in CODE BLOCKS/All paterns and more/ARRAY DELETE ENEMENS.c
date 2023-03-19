#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter No.%d element: ",i+1);
        scanf("%d",&arr[i]);
    }printf("Before deleting the element:\n\n");
    for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }printf("\n\n");
    printf("Enter the location of element you want to delete: ");
    scanf("%d",&pos);

    if(pos>n||pos<1){
        printf("Deletion not possible.");
    }else{
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("After deleting the element:\n\n");
    for(int i=0;i<n-1;i++){
    printf("%d\t",arr[i]);
    }
    }
    printf("\n\n\n");
    return 0;

}
