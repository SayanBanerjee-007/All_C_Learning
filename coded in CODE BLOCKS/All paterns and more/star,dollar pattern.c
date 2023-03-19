#include<stdio.h>
int main()
{
   int num;
   printf("Enter limit");
   scanf("%d",&num);
   printf("\n");
   for(int i=1;i<=num;i++){
   for(int j=1;j<=i;j++){
     if(i%2==1){
        if(j%2==0)
    {printf("$ ");}
        if(j%2!=0)
     {printf("* ");}
        }  if(i%2!=1){
        if(j%2==0)
    {printf("* ");}
        if(j%2!=0)
     {printf("$ ");}
        }

}
 printf("\n");
}
printf("\n\n");
return 0;
}
