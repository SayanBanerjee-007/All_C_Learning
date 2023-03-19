#include<stdio.h>
struct employee{

int code;
float salary;
char name[20];

};
int main()
{
    struct employee e1={115,5646.64,"sayan"};
    struct employee e2={192,566.664,"saany"};
    struct employee e3={175,56.6455,"snynn"};


    printf("code-->%d ,salary-->%.2f ,name-->%s\n",e1.code,e1.salary,e1.name);
    printf("code-->%d ,salary-->%.2f ,name-->%s\n",e2.code,e2.salary,e2.name);
    printf("code-->%d ,salary-->%.2f ,name-->%s\n\n\n",e3.code,e3.salary,e3.name);


    return 0;
}

