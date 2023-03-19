#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr=fopen("int.txt","r");
    printf("The integers are: ");
    for(int i=1;i<=3;i++)
    {
        fscanf(ptr,"%d",&num);
        printf("\n%d",num);
    }
    fclose(ptr);
    printf("\n\n\n");
    return 0;
}
