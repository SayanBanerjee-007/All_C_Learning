#include<stdio.h>
#include<math.h>
#define MAX 180
#define PI 3.1416

int main()
{
    int angle=0;
    float tempangle;
    while(angle<=MAX){
        tempangle=(PI/MAX)*angle;
    printf("%10d %13f\n",angle,sin(tempangle));
    angle+=10;
    }
    return 0;
}