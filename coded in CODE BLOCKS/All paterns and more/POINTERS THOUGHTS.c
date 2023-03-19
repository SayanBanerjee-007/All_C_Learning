//pointer thoughts
#include<stdio.h>
int main ()
{
   int n=5;
  int *p=&n;
  int **l=&p;
  printf("The value of n is %d\n",n);
  printf("The value of *p is %d\n",*p);
  printf("The adress of i is %d\n",p);
  printf("The adress of p is %d\n",&p);
  printf("The adress of i is %d\n",&n);
  printf("The adress of i is %d\n",*(&p));
  printf("The adress of i is %d\n",&l);
  printf("The adress of i is %d\n",**l);

  return 0;
}
