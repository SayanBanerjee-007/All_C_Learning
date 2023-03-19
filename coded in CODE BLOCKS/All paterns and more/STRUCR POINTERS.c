#include<stdio.h>
#include<string.h>

struct employee{

int code;
float salary;
char name[20];

};
int main()
{
    struct employee e1;//={115,5646.64,"sayan"};
    struct employee *ptr=&e1;

 //(*ptr).code=456;  --->old type
    ptr->code=456;   //-->new type

   (*ptr).salary=4999.54;

    //(*ptr).name="SAYAN";              --->It is wrong
    //e1.name="sayan";                    --->It is wrong also

 //   strcpy((*ptr).name,"sayan");  -->old type LOL.........
    strcpy(ptr->name,"sayan");

    printf("code-->%d ,salary-->%.2f ,name-->%s\n",(*ptr).code,e1.salary,(*ptr).name);//e1 or (*ptr)


    return 0;
}


