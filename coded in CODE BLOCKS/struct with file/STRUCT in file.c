#include<stdio.h>
#include<stdlib.h>
typedef struct employee{

    int id;
    char name[30];
    float salary;
}emp;
int main()
{
    FILE *outfile;
    outfile = fopen("Employee details.txt","w");
    if(outfile==NULL){
        printf("Error!! file can not be opened.");
        exit(1);
    }
    int i,n;
    printf("Enter employee numbers--> ");
    scanf("%d",&n);
    emp *e;
    if((e = malloc(n*sizeof(emp)))==0){
         printf("Error!! You haven't that much memory free.");
         exit(1);
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("Enter No.%d employee ID --> ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter name: ");
        fflush(stdin);
        gets(e[i].name);
        printf("Enter salary --> ");
        scanf("%f",&e[i].salary);
        printf("\n");
    }

    for(i=0;i<n;i++){
        fprintf(outfile,"Employee ID --> %d,\t",e[i].id);
        fprintf(outfile,"Name: %s,\t",e[i].name);
        fprintf(outfile,"Salary --> %.2f\t",e[i].salary);
        fprintf(outfile,"\n");
    }
    fclose(outfile);
    return 0;
}
