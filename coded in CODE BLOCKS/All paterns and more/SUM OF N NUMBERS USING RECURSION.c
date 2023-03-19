#include<stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\n\n");
    printf("Sum of first %d digit is -->%d",num,sum(num));
    printf("\n______________________________________________\n");
}
int sum(int n){
 int r=0;
     if(n==0||n==1){
        return 1;
     }
      else{
        return n+sum(n-1);
        }

}
