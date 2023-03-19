#include<stdio.h>

typedef struct student{
  char name[20];
  float sub[3];
}std;
int main()
{
    std s[10];
    int i,j;
    float res=0,sum=0;
    for(i=0;i<10;i++)
    {printf("Enter student No.%d name: ",i+1);
     fflush(stdin);
     gets(s[i].name);
     for(j=0;j<3;j++)
     {printf("Enter subject No.%d marks: ",j+1);
      scanf("%f",&s[i].sub[j]);
     }
     printf("\n");
    }
    for(i=0;i<10;i++)
    {for(j=0;j<3;j++)
        {
            sum+=s[i].sub[j];
        }
        if(res<sum){
            res=sum;
        }
        sum=0;
    }
    for(i=0;i<10;i++)
    {for(j=0;j<3;j++)
        {
            sum+=s[i].sub[j];
        }
        if(sum==res)
        {
            printf("\n\n%s get highest total marks.",s[i].name);
            for(j=0;j<3;j++){
                printf("Subject No.%d marks --> %.2f\n",j+1,s[i].sub[j]);
            }
            printf("Total marks --> %.2f",res);
        }
        sum=0;
    }
    printf("\n\n\n");
    return 0;
}
