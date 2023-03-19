#include <stdio.h>
#include <stdlib.h>
int res(int, int);
int main()
{
  printf("Result %d\n", res(29, -29));

  return 0;
}
int res(int a, int b)
{
  if ((a <= 20 && a >= 30) && (b <= 20 && b >= 30))
  {
    return 0;
  }
  if ((a >= 20 && a <= 30) && (b >= 20 && b <= 30))
  {
    return a > b ? a : b;
  }
  else
  {
    return (a >= 20 && a <= 30)?a:b;
  }
}
