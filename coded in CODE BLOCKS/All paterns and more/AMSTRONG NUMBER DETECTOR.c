#include<stdio.h>
int main() {


     int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

    for (originalNum; originalNum>0;originalNum /= 10, n++ ) {}
   for (originalNum=num; originalNum >0;) {
       remainder = originalNum % 10;
       result += pow(remainder, n);
        originalNum /= 10;
   }





   if ( (int)result ==num)
    printf("\n%d is an Armstrong number.\n\n", num);
   else
    printf("\n%d is not an Armstrong number.\n\n", num);
   return 0;
}



