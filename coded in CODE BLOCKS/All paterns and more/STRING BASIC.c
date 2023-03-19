#include<stdio.h>
int main()
{
   // char str[]={'H','E','L','L','O',' ','W','O','R','L','D','\0'}; --->old type
    char str[]="HELLO WORLD";//--> advanced type
    char *ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
     printf("\n\n");

   char *ptrr="HELLO WORLD";//-->more advance type
   printf("%s",ptrr);

    printf("\n\n");

    char ppp[]="HELLO WORLD";
    //printf("%s",&ppp[0]); --->old type
    printf("%s",ppp);// advanced type

    printf("\n\n");

return 0;
}
