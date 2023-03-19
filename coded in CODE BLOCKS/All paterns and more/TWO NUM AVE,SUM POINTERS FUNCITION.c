#include<stdio.h>
void sum(float *a,float *b );
void ave(float *a,float *b );
void main()
{
    float x,y;
    printf("Enter two numbers:\n");
     printf("\n\n");
    printf("Enter 1st number:");
    scanf("%f",&x);
    printf("Enter 2nd number:");
    scanf("%f",&y);
    printf("\n\n");
    sum(&x,&y);
    ave(&x,&y);

}
void sum(float *a,float *b )
{
  printf("The sum of two numbers is %.2f\n",(*a+*b));

}
void ave(float *a,float *b )
{

  printf("The ave of two numbers is %.2f\n\n",(*a+*b)/2);

}
