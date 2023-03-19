#include<stdio.h>
typedef struct emplyoee
{
    char name[20];
    float salary;
}emp;
int main()
{
   int n;
   printf("Enter numbers of you want to write employee:");
   scanf("%d",&n);
   FILE *ptr;
   emp e[n];
   printf("\n\n");
   for(int i=0;i<n;i++)
   {
       fflush(stdin);
       printf("Enter employee No.%d name: ",i+1);
       gets(e[i].name);
       printf("Enter employee No.%d salary: ",i+1);
       scanf("%f",&e[i].salary);
       printf("\n");
   }
   ptr=fopen("data.txt","w");
    for(int i=0;i<n;i++)
   {
       fprintf(ptr,"Name: %s  ,  Salary = %.2f\n",e[i].name,e[i].salary);
   }
   fclose(ptr);
   return 0;
}
