#include<stdio.h>
int main()
{
  char ch[2];
  FILE *ptr;
  ptr=fopen("ex.txt","r");
  ch[0]=fgetc(ptr);
  ch[1]=fgetc(ptr);
  printf("%c",ch[0]);
  printf("%c",ch[1]);
  fclose(ptr);
  return 0;

}

