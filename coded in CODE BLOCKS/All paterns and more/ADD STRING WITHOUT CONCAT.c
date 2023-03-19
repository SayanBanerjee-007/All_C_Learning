#include<stdio.h>
#include<string.h>
void cat(char s1[] ,char s2[]);
int main()
{
   char s1[50],s2[20];
   printf("Enter first string:");
   scanf("%s",s1);
   printf("Enter first string:");
   scanf("%s",s2);
   int i,j;
   i=strlen(s1);
   for(j=0;s2[j]!='\0';i++,j++){
    s1[i]=s2[j];
   }
   s1[i]='\0';

   printf("%s",s1);
}
