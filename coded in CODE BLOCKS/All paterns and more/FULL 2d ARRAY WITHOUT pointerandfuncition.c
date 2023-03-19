#include<stdio.h>
int main()
{
    int student,subject;
    printf("Enter numbers of students:");
    scanf("%d",&student);
    printf("\nEnter numbers of subjects:");
    scanf("%d",&subject);
    int marks[student][subject];
    printf("\n\n");
    for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("Enter student No.%d and subject No.%d number-->",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        printf("\n-------------------------------------------------\n\n");
    }
     printf("****STUDENTS REASULTS****");
     printf("\n\n");
     for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("\nstudent No.%d and subject No.%d number-->%d\n",i+1,j+1,marks[i][j]);
        }
         printf("\n-------------------------------------------------\n\n");
     }
return 0;
}
