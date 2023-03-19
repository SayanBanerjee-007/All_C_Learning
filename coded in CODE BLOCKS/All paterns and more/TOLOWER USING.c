#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[20];
    printf("Enter your sentence:\n");
    gets(sentence);

    for(int i=0;i<strlen(sentence);i++){
        if(sentence[i]>='A'&&sentence[i]<='Z'){
            sentence[i]=tolower(sentence[i]);
        }
    }
    printf("\n\nYour sentence in lowercase:\n%s\n\n\n",sentence);

}
