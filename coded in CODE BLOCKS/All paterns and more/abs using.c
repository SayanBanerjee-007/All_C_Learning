//Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.
#include <stdio.h>
#include <stdlib.h>
int res(int, int);
int main()
{
  printf("Result %d\n", res(100, 99));

  return 0;
}
int res(int a, int b)
{

  return (abs(a - 100)==abs(b - 100))? 0:(abs(a - 100) < abs(b - 100)?a:b);
  /*
  if (abs(a - 100) < abs(b - 100))
  {
    return a;
  }
  else
  {
    return b;
  }*/
}
