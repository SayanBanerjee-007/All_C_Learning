#include<stdio.h>

typedef struct student{
  char name[20];
  float sub[3];
}std;
int main()
{
    std s[10];
    int i,j;
    float res[3]={0};
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
    for(j=0;j<3;j++)
    {
        for(i=0;i<10;i++)
       {if(res[j]<s[i].sub[j]){
           res[j]=s[i].sub[j]; }
       }
    }
    for(j=0;j<3;j++){

        for(i=0;i<10;i++)
       {if(res[j]==s[i].sub[j])
         printf("%s get highest number in No.%d subject.\n",s[i].name,j+1);
       }
    }

    printf("\n\n\n");
    return 0;
}

