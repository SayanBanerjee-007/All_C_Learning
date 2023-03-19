#include<stdio.h>
void slice(char *ptr,int m,int n)
{
    int i=0;
    while((i+m)<n){
       ptr[i]=ptr[i+m];
      i++;
    }
ptr[i]='\0';
}
int main()
{

    char arr[]="Harry";
    slice(arr,1,4);

    printf("%s",arr);

}

