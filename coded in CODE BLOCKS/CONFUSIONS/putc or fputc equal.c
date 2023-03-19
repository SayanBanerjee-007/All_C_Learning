#include<stdio.h>
int main()
{
  char ch[]={'a','s'};
  FILE *ptr;
  ptr=fopen("ex2.txt","w");
  fputc(ch[0],ptr);
  fputc(ch[1],ptr);
  fclose(ptr);

  return 0;

}


