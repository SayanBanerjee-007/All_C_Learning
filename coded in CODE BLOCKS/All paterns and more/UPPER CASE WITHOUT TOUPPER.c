#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    printf("Enter your sentence:\n");
    gets(sentence);

    for(int i=0;i<strlen(sentence);i++){
        if(sentence[i]>='a'&&sentence[i]<='z'){
            sentence[i]=sentence[i]-32;
        }
    }
    printf("\n\nYour sentence in lowercase:\n%s\n\n\n",sentence);
}


