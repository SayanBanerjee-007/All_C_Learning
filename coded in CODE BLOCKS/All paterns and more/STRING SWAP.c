#include<stdio.h>
#include<string.h>
int main()
{
    char sen1[50];
    char sen2[50];
    char temp[50];
    printf("Enter your 1st sentence :\n");
    gets(sen1);
    printf("Enter your 2nd sentence :\n");
    gets(sen2);
    printf("\n\n****Before swaping****\nFIRST :\n%s\nSECOND :\n%s",sen1,sen2);
    strcpy(temp,sen1);
    strcpy(sen1,sen2);
    strcpy(sen2,temp);
    printf("\n\n****AFTER swaping****\nFIRST :\n%s\nSECOND :\n%s",sen1,sen2);

}

