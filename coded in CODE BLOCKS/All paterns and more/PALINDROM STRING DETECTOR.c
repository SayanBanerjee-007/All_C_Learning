#include<stdio.h>
#include<string.h>
void palindromChecker(char sentence[20])
{
    char original[20];
    int flag=0;
    strcpy(original,sentence);
    for(int i=0;i<strlen(sentence);i++){
         sentence[i]=sentence[strlen(sentence)-i-1];
       }
    for(int i=0;i<strlen(sentence);i++){
         if(original[i]!=sentence[i]){
            flag=1;
         }else{
           flag=0;
         }
       }
       if(flag==0){
            printf("\n%s is a palindrome.\n\n\n ",original);
         }else{
         printf("\n%s is not a palindrome.\n\n\n ",original);}


}
int main()
{
    char sentence[20];
    printf("Enter your sentence:\n");
    gets(sentence);
    palindromChecker(sentence);

}

