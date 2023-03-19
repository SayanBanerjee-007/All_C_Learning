//ASCII-->American Standard Code for Information Interchange

#include<stdio.h>
int main()
{
int First,Last;
printf("Enter First Number:\n");
scanf("%d",&First);
printf("Enter Last Number:\n");
scanf("%d",&Last);
for(First;First<=Last;First++)
{
    printf("%d-->%c \n",First);
}
}
