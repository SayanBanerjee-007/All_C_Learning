#include<stdio.h>
int main()
{
    char arr[50];
    int vo=0,co=0,j=0;
    printf("Enter your sentence: \n");
    gets(arr);
    printf("%s\n\n",arr);

    while(arr[j]!='\0'){
    if(isalpha(arr[j])){
    if(arr[j]=='a'||arr[j]=='e'||arr[j]=='i'||arr[j]=='o'||arr[j]=='u'||arr[j]=='A'||arr[j]=='E'||arr[j]=='I'||arr[j]=='O'||arr[j]=='U'){
        vo++;
    }else{
        co++;
    }
    }
    j++;
    }

    printf("Numbers of VOWEL alphabet: %d\n",vo);
    printf("Numbers of CONSONENT alphabet: %d\n",co);
    printf("\n\n");
}

