#include<stdio.h>
int main()
{
    FILE *ptr;
    int n,sum=0;
    printf("how many integers you want to write: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter No.%d element: ",i+1);
        scanf("%d",&arr[i]);
       }

    ptr=fopen("ex.txt","w");
    for(int i=0;i<n;i++){
    fprintf(ptr,"%d\n",*(arr+i));
    sum+=*(arr+i);
    }
    fprintf(ptr,"Sum of elements is %d",sum);
    fclose(ptr);
    return 0;

}
