#include<stdio.h>
int main()
{
  float income,amount;
  printf("ENTER YOUR INCOME VALUE :");
  scanf("%f",&income);
  if(income>0)
  {
  if(income<=250000)
  {
   printf("YOU HAVE TO PAY NO TAX");
  }
  if(income>250000 && income<=500000)
  {
   amount=(income-250000)*0.05;
   printf("YOU HAVE TO PAY %.2f RUPEES TAX",amount);
  }
  if(income>500000 && income<=750000)
  {
   amount=(income-500000)*0.1+12500;
   printf("YOU HAVE TO PAY %.2f RUPEES TAX",amount);
  }
  if(income>750000 && income<=1000000)
  {
   amount=(income-750000)*0.15+37500;
   printf("YOU HAVE TO PAY %.2f RUPEES TAX",amount);
  }
  if(income>1000000 && income<=1250000)
  {
   amount=(income-1000000)*0.2+75000;
   printf("YOU HAVE TO PAY %.2f RUPEES TAX",amount);
  }
  if(income>1250000 && income<=1500000)
  {
   amount=(income-1250000)*0.25+125000;
   printf("YOU HAVE TO PAY %.2f RUPEES TAX",amount);
  }
  if(income>1500000)
  {
   amount=(income-1500000)*0.3+187500;
   printf("YOU HAVE TO PAY %.2f RUPEES TAX",amount);
  }
  }else
   printf("WRONG VALUE");

   return 0;
}
