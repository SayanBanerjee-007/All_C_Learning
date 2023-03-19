#include<stdio.h>
int main()
{
    int num;
    printf("Enter how many integer numbers u want to in put:");
    scanf("%d",&num);
    int marks[num];
    int *ptr=marks;
    for(int i=0;i<num;i++)
    {
        printf("\nEnter number student No.%d-->",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    int lim;
    printf("\nwhich student number u want:");
    scanf("%d",&lim);
    if(lim<=num){
    printf("\nSTUDENT No.%d is-->%d",lim,*(marks+(lim-1)));}
    else
    {
        printf("\n!!!WRONG STUDENT NUMBER!!!\n     PLEASE TRY AGAIN");
    }
    printf("\n\n");

return 0;
}
