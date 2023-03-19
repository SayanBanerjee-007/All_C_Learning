#include<stdio.h>

int main()
{
    int i=0,len=0;
    char str[30];
    printf("Enter your sentece: ");
    scanf("%[^\n]",str);    
    printf("Your sentece is --> %s\n");
    
    while(str[i]!='\0')
    {
        if(str[i]!=' '){        
        len++;}
        i++;
        
    }
    printf("Number of characters in the sentence without whhite space is -> %d",len);
    return 0;
}