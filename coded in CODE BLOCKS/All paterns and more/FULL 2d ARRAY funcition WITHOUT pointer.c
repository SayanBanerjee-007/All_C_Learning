#include<stdio.h>
void display(int student,int subject,int *mark);
int main()
{
    int student,subject;
    printf("Enter numbers of students:");
    scanf("%d",&student);
    printf("\nEnter numbers of subjects:");
    scanf("%d",&subject);
    int mark[student][subject];
    printf("\n\n");
    for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("Enter student No.%d and subject No.%d number-->",i+1,j+1);
            scanf("%d",&mark[i][j]);
        }
        printf("\n-------------------------------------------------\n\n");
    }
   // int mark[student][subject];
  //  printf("%d",ptr);
    display(student,subject,mark);

return 0;
}
void display(int student,int subject, int *mark)
{
   // printf("%d",*ptr);

   printf("****STUDENTS REASULTS****");
     printf("\n\n");
     for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("\nstudent No.%d and subject No.%d number-->%d\n",i+1,j+1,*(mark[i]+j));
        }
         printf("\n-------------------------------------------------\n\n");
     }
}
