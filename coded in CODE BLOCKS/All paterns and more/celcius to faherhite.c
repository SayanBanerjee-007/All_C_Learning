#include<stdio.h>
float ctof(float c);
main()
{
    float c,f;
    printf("Enter value in CENTRIGRADE :\n");
    scanf("%f",&c);
    printf("%f C = %f F\n",c,ctof(c));
}
float ctof(float c)
{
    float f=(c*9/5)+32;

     return f;
}
