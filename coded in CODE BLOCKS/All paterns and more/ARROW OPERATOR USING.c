#include<stdio.h>

typedef struct example
{
int num;
char name[20];
}ex;
int main()
{
    ex e1,e2;
    ex *ptr=&e1;

    e1.num=10;
    strcpy(e1.name,"sayan");
    printf("Number=%d and name is %s\n",e1.num,e1.name);

//    (*ptr).num=10;
//    strcpy((*ptr).name,"sayan");   ----->this is old process and use of *,() ,we dont use it.  LOL......

    ptr->num=10;
    strcpy( ptr->name,"sayan");
    printf("Number=%d and name is %s", ptr->num,ptr->name);
}
