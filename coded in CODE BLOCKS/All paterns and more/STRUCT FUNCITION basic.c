#include<stdio.h>
#include<string.h>

struct employee{

int code;
float salary;
char name[20];

};
void show(struct employee emp)
{
printf("code-->%d ,salary-->%.2f ,name-->%s\n",emp.code,emp.salary,emp.name);

emp.code=11111;// code value will not change..
}
int main()
{
    struct employee e1;
    struct employee *ptr=&e1;


    ptr->code=456;
    (*ptr).salary=4999.54;
    strcpy(ptr->name,"sayan");

    show(e1);

    printf("\n%d\n\n\n\n",e1.code);// same code value of code after changing in funcition

    return 0;
}



