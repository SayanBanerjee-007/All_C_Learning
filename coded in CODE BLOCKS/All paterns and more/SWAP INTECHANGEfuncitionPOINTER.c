#include<stdio.h>
void interchange(int a ,int b);
void interchangeRef(int *a ,int *b);
int main()
{
    int a,b;
    printf("Value of a :");
    scanf("%d",&a);
    printf("Value of b :");
    scanf("%d",&b);
    printf("\n\nBEFORE INTERCHANGE \na-->%d and b-->%d\n\n",a,b);
    interchange(a,b);
    printf("\n\nAFTER INTERCHANGIMG by VALUE outside funcition\na-->%d and b-->%d",a,b);
    printf("\n\n");
    interchangeRef(&a,&b);
    printf("AFTER INTERCHANGINNG by REFFERENCE outside funcition\na-->%d and b-->%d\n\n",a,b);
}
void interchange(int a ,int b)
{
   a=a^b;
   b=a^b;
   a=a^b;


   printf("\n\nAFTER INTERCHANGIMG by VALUE inside funcition\na-->%d and b-->%d",a,b);
}
void interchangeRef(int *a ,int *b)
{
   *a=*a^*b;
   *b=*a^*b;
   *a=*a^*b;

   printf("\n\nAFTER INTERCHANGINNG by REFFERENCE inside funcition\na-->%d and b-->%d\n\n",*a,*b);
}
