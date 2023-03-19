#include <stdio.h>
#include <stdlib.h>
int res(int, int);
int main()
{
  printf("Result %d\n", res(295, -1239));

  return 0;
}
int res(int a, int b)
{
    return (abs(a%10)==abs(b%10));  
}
