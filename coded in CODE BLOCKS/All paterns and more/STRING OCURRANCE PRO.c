#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


int main()
{
    char *str=malloc(100*sizeof(char));
    int i=0,len,count=1,flag=1;
    printf("Enter your word: \n");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
    {   if(!isalpha(str[i]))
        {printf("You have entered wrong character!!!\n\tTRY AGAIN\n\n");
        exit(0);}
    }
    }
    printf("\n\nOCCURRENCE of characters: \n\n");
    for(int i=0;i<len;i++){

       if(i>0){
        for(int k=0;k<i;k++)
            if(str[i]==str[k]){flag=0;}
       }

       if(flag==1){
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){count++;}
       }
       printf("Occurrence of %c is -> %d \n",str[i],count);
       count=1;
     }
     flag=1;
    }

   free(str);
   return 0;
}
