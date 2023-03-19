#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
{
    printf("enter No.%d number-->",i+1);
    scanf("%d",&a[i]);

}
    for(i=0;i<10;i++)
    {
        printf("No.%d number--> %d\n",i+1,a[i]);
    }

    return 0;
}
