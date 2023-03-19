#include<stdio.h>
#include<string.h>
int main()
{
    char *str="SAYAN";
    char *str2="sayan";
    int val=strcmp(str,str2);
    printf("Now comparing str and srt2 type-->%d.\n",val);

  // if str==str2 val(return)-->0
  // if str first mismatching character ASCII value is less than str2 correspondin character ASCII value,, val(return)--> -1
  // if str!=str2 val(return)-->1

return 0;

}



