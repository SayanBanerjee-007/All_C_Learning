#include<stdio.h>
typedef struct date
{
  int d;
  int m;
  int y;

}date;
void display(date dt[] , int n )
{
     for(int i=0;i<n;i++){
     printf("No.%d DATE--> %d/%d/%d \n",i+1,dt[i].d,dt[i].m,dt[i].y);
     }
}
void datecheck(date dte[],int n)
{
for(int i=0;i<n-1;i++){
     if(dte[i].y<dte[i+1].y||dte[i].m<dte[i+1].m||dte[i].d<dte[i+1].d){
        printf("1");
     }else if(dte[i].y>dte[i+1].y||dte[i].m>dte[i+1].m||dte[i].d>dte[i+1].d){
        printf("-1");
     }else{
        printf("0");
     }
}
}
int main()
{
    int n;
    printf("Enter numbers of dates: ");
    scanf("%d",&n);
    date dt[n],sum;
    for(int i=0;i<n;i++){
        printf("\nEnter No.%d number of day: ",i+1);
        scanf("%d",&dt[i].d);
        printf("Enter No.%d number of month: ",i+1);
        scanf("%d",&dt[i].m);
        printf("Enter No.%d number of year: ",i+1);
        scanf("%d",&dt[i].y);
    }printf("\n");
    display(dt,n);
    datecheck(dt,n);

printf("\n\n\n");
return 0;
}
