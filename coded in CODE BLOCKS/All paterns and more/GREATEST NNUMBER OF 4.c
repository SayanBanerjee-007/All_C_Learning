#include<stdio.h>
main()
{
float a,b,c,d,big;
int i;
printf("ENTER FOUR NUMBER AND I WILL TELL YOU THE GREATEST NUMBER\n");
for(i=1;i<=4;i++)
{
switch(i)
{
case 1:
printf("Enter 1st number :");
scanf("%f",&a);
break;
case 2:
printf("Enter 2nd number :");
scanf("%f",&b);
break;
case 3:
printf("Enter 3rd number :");
scanf("%f",&c);
break;
case 4:
printf("Enter 4yh number :");
scanf("%f",&d);
break;
}
}
big=(a>b && a>c && a>d)? a : ((b>c && b>d)? b : (c>d)? c : d );
printf("THE GREATEST NUMBER IS -->%f ",big);
}
