#include<stdio.h>
int main()
{
    char sen[50];
    printf("Enter a sentense:\n\n");
    gets(sen);
    int len=strlen(sen),count=0;
    for(int i=0;i<len;i++){
        if(sen[i]>='A'&&sen[i]<='Z'){
            sen[i]=tolower(sen[i]);
        }if(sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u'){
        count++;
        }
     }
     printf("\nNumber of vowel in the sentence is-->%d\n\n\n",count);

}
