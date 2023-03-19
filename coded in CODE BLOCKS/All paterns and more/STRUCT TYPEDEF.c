#include<stdio.h>
#include<string.h>

typedef struct employee{

int code;
float salary;
char name[20];

}emp;// struct employee == emp
void show(emp emp)// first emp is  struct employee  and second one is struct variable name
{
printf("code-->%d ,salary-->%.2f ,name-->%s\n",emp.code,emp.salary,emp.name);
}
int main()
{
    emp e1;// struct employee == emp
    emp *ptr=&e1;


    ptr->code=456;
    (*ptr).salary=4999.54;
    strcpy(ptr->name,"sayan");

    show(e1);



    return 0;
}




