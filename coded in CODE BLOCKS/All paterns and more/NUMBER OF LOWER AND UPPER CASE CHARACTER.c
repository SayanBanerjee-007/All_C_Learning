#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    int low=0,up=0;
    printf("Enter your sentence:\n");
    gets(sentence);

    for(int i=0;i<strlen(sentence);i++){
        if(sentence[i]>='a'&&sentence[i]<='z'){
            low++;
        }
        if(sentence[i]>='A'&&sentence[i]<='Z'){
            up++;
        }
    }

    printf("\n\nNumber of lowercase character:%d\nNumber of uppercase character:%d\n\n\n",low,up);
}


