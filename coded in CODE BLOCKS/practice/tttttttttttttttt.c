#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int main()
{
    char *str=malloc(100*sizeof(char)),*str2;
    int i,j,len,k=0,lim;
    printf("Enter your word: \n");
    gets(str);
    len=strlen(str);lim=len;
    str2=malloc(len*sizeof(char));

    for(i=len;i>=0;i--){
        if(str[i]==' '){
        for(j=i+1;j<lim;j++,k++){
            str2[k]=str[j];
        }   str2[k]=' ';k++;lim=i;
        }
        if(i==0){
        for(j=0;j<lim;j++,k++){
            str2[k]=str[j];
        }
        }
    }
    str2[k]=0;

   puts(str2);

   free(str2);
   free(str);
   return 0;
}
