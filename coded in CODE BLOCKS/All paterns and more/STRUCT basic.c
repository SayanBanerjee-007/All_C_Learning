#include<stdio.h>
struct employee{

int code;
float salary;
char name[20];

};
int main()
{
    struct employee e1,e2,e3;

    printf("Enter code of e1  : ");
    scanf("%d",&e1.code);
    printf("Enter salary of e1: ");
    scanf("%f",&e1.salary);
    printf("Enter name of e1  : ");
    fflush(stdin);
    gets(e1.name);
    printf("code-->%d ,salary-->%.2f ,name-->%s",e1.code,e1.salary,e1.name);

    printf("\n\nEnter code of e2  : ");
    scanf("%d",&e2.code);
    printf("Enter salary of e2: ");
    scanf("%f",&e2.salary);
    printf("Enter name of e2  : ");
    fflush(stdin);
    gets(e2.name);
    printf("code-->%d ,salary-->%.2f ,name-->%s",e2.code,e2.salary,e2.name);


    printf("\n\nEnter code of e3  : ");
    scanf("%d",&e3.code);
    printf("Enter salary of e3: ");
    scanf("%f",&e3.salary);
    printf("Enter name of e3  : ");
    fflush(stdin);
    gets(e3.name);
    printf("code-->%d ,salary-->%.2f ,name-->%s\n\n\n",e3.code,e3.salary,e3.name);


    return 0;
}
