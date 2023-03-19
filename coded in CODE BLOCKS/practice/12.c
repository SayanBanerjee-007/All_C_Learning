#include<stdio.h>
typedef struct emp{

   char gen;
   int year;
   char qua;
}emp;
int main()
{
    emp e;
    printf("Enter your gender(m/f): ");
    scanf("%c",&e.gen);
    printf("Enter your working year: ");
    scanf("%d",&e.year);
    printf("Enter your qualification(GARDUATE-->g ,POST-GRADUATE-->p): ");
    fflush(stdin);
    scanf("%c",&e.qua);

    if(e.gen=='m'){
        if(e.year>=10){
            if(e.qua=='p'){
                printf("\nSalary = %d",15000);
            }else if(e.qua=='g'){
                printf("\nSalary = %d",10000);
            }
        }else if(e.year<10&&e.year>0){
            if(e.qua=='p'){
                printf("\nSalary = %d",10000);
            }else if(e.qua=='g'){
                printf("\nSalary = %d",7000);
            }
        }
     }else if(e.gen=='f'){
        if(e.year>=10){
            if(e.qua=='p'){
                printf("\nSalary = %d",15000);
            }else if(e.qua=='g'){
                printf("\nSalary = %d",10000);
            }
        }else if(e.year<10&&e.year>0){
            if(e.qua=='p'){
                printf("\nSalary = %d",10000);
            }else if(e.qua=='g'){
                printf("\nSalary = %d",7000);
            }
        }
     }
     printf("\n\n\n");
     return 0;
}
