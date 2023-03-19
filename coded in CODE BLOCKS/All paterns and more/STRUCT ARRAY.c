#include<stdio.h>
struct employee{

int code;
float salary;
char name[20];

};
int main()
{
    struct employee e[10];

   for(int i=0;i<10;i++){
    printf("Enter code of e%d  : ",i+1);
    scanf("%d",&e[i].code);
    printf("Enter salary of e%d: ",i+1);
    scanf("%f",&e[i].salary);
    printf("Enter name of e%d  : ",i+1);
    fflush(stdin);
    gets(e[i].name);
    printf("code-->%d ,salary-->%.2f ,name-->%s\n\n",e[i].code,e[i].salary,e[i].name);
   }

    return 0;
}

