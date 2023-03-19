#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr = malloc(6*sizeof(float));
    for(int i=0;i<6;i++)
    {
    if(ptr!=NULL){
    printf("Enter No.%d value: ",i+1);
    scanf("%f",&ptr[i]);
    }}
    for(int i=0;i<6;i++)
    {
    printf("No.%d value is ----> %.2f \n",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}
