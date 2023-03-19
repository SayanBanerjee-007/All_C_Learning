#include<stdio.h>
float mass(float w);
int main()
{
    float w;
    printf("Enter weight in Kg:\n");
    scanf("%f",&w);
    printf("%f Kgf == %f Kg\n",w,mass(w));
    return ;
}
float mass(float w)
{
    float m=w/9.8;
    return m;


}
