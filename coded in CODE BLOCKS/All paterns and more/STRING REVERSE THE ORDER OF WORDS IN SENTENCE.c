#include<stdio.h>
#include<string.h>
int main()
{
    char sen[50];
    printf("Enter your sentence :\n");
    gets(sen);
    int len=strlen(sen),k=0,count=len;
    char sen2[len];

    for(int j=len-1;j>=0;j--){
    if(sen[j]==' '){
    for(int i=j+1;i<count;i++,k++){
        sen2[k]=sen[i];
    }sen2[k]=sen[j];
    k++;
    count=j;}
    if(j==0){
    for(int i=0;i<count;i++,k++){

        sen2[k]=sen[i];

    }}
    sen2[k]=0;
}
    printf("%s",sen2);
}
