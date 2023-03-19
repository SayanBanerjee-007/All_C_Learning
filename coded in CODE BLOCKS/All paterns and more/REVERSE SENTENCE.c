#include<stdio.h>
void SenteceReverse();
int main()
{
    printf("Enter a sentense :\n-->");
    SenteceReverse();

}
void SenteceReverse()
{
 char c;
 scanf("%c",&c);
 if(c!='\n'){
    SenteceReverse();
    printf("%c", c);
 }
}
