#include<stdio.h>
int occurrence(char *str,char c)
{
    int count=0;
   while(*str!='\0')
   {
       if(*str==c){
        count++;
       }str++;
   }
   return count;
}
int main()
{
    char c;
    char *str;
    printf("Enter your sentense:\n\n");
    gets(str);
    fflush(stdin);
    printf("\nWhich character occurrence you want to find :");
    scanf("%c",&c);
    int count=occurrence(str,c);
     printf("%c occurrence is -->%d\n\n",c,count);

}
