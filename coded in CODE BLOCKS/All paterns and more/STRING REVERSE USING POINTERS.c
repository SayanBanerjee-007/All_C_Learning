#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[50];
    printf("Enter your sentence:\n");
    gets(sentence);
    int len=strlen(sentence);
    char sentence2[len];
    int i,j=0;
    for(i=len-1;i>=0;i--,j++){
       sentence2[j]=sentence[i];

        }
sentence2[j]=0;
    printf("\nThe REVERSED sentence is:\n%s\n\n",sentence2);
return 0;
}

