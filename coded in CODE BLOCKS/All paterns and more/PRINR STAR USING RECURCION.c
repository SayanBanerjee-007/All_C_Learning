#include<stdio.h>
void printpatten(int n);
int main()
{
    int num;
    printf("Enter row numbers:");
    scanf("%d",&num);
    printpatten(num);

}
void printpatten(int n)
{
   if(n==1){
    printf("*\n");
    return;
   }
    printpatten(n-1);
    for(int i=1;i<2*n;i++){
    printf("*");
    }
    printf("\n");
}
