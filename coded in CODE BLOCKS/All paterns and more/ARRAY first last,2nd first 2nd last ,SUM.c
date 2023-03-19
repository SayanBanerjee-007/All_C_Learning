#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int num[n];
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter No.%d element: ",i+1);
        scanf("%d",num+i);
    }printf("\nARRAY ELEMENTS\n\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(num+i));
    }printf("\n\n***SUM***\n\n");

    if(n%2==0){
    for(i=0;i<n/2;i++){
        printf("%d + %d = %d\t",num[i],num[n-1-i],num[i]+num[n-1-i]);
    }
    }else if(n%2==1){
    for(i=0;i<(n/2)+1;i++){if(i<(n/2)+1){
        printf("%d + %d = %d\t",num[i],num[n-1-i],num[i]+num[n-1-i]);
    }if(i==(n/2)+1){
        printf("%d + %d = %d\t",num[i],num[i],num[i]+num[i]);}
    }
    }
    printf("\n\n");
    return 0;
}
