#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[50];
    printf("Enter your sentence with white space:\n");
    gets(sentence);
    int len=strlen(sentence);
    int i=0,j=0;
    for(i=0;i<len;i++){
        if(sentence[i]!=' '){
            sentence[j]=sentence[i];
            j++;
        }
    }sentence[j]=0;
    printf("\nThe sentence with out space is:\n%s\n\n",sentence);
return 0;
}
