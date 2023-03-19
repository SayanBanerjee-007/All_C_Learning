#include<stdio.h>
int main() {


     int num, originalNum, remainder, n = 0,low,high;
   float reasult = 0.0;

   printf("Enter lower limit :");
   scanf("%d",&low);

   printf("\nEnter lower limit :");
   scanf("%d",&high);

   printf("\n\n");

  for(low;low<=high;){
   originalNum = low;

    for (originalNum; originalNum>0; ) {

       originalNum /= 10;
       n++;
   }
        for (originalNum=low; originalNum >0;) {

                 remainder = originalNum % 10;
                reasult += pow(remainder, n);
                    originalNum /= 10;

   }

        if ( (int)reasult ==low)
        {
        printf("%d \t", low);
       }
low++;
n=0;
reasult=0;
}
printf("\n\n");
return 0;
}


