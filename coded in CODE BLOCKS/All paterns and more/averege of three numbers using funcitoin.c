#include<stdio.h>
float average(int a, int b, int c);
int main()
{         int x,y,z;

     printf("Enter value of x \n");
     scanf("%d",&x);
     printf("Enter value of y \n");
     scanf("%d",&y);
     printf("Enter value of z \n");
     scanf("%d",&z);
     printf("The value of average is %f",average(x,y,z));
    return 0;
}
float average(int a, int b, int c){

    float reasult=(float)(a+b+c)/3;
    return reasult;


}
