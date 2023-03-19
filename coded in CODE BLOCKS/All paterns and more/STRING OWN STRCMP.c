#include<stdio.h>
int main()
{
    char first[50],second[50];
    printf("Enter first word:\n");
    gets(first);
    printf("\n\nEnter second word:\n");
    gets(second);
    printf("\n");
    int len1=strlen(first);
    int len2=strlen(second);
    int flag=0;

    if(len1==len2){
    for(int i=0;i<len1;i++){
       if(first[i]!=second[i]){
        flag=1;}
        }if(flag==0)
    {printf("Both words are fully equal-->0");
     goto jump;
    }

    for(int i=0;i<len1;i++){
       if(first[i]<second[i]){
        flag=2;}
        }if(flag==2)
    {printf("Both words are not fully equal-->-1\n\n\n");
     goto jump;
    }

     for(int i=0;i<len1;i++){
       if(first[i]>second[i]){
        flag=3;}
        }if(flag==3)
    {printf("Both words are not fully equal-->1\n\n\n");
     goto jump;
    }
    }else{
     for(int i=0;i<len1;i++){
       if(first[i]<second[i]){
        flag=2;}
        }if(flag==2)
    {printf("Both words are not equal-->-1\n\n\n");
     goto jump;
    }

     for(int i=0;i<len1;i++){
       if(first[i]>second[i]){
        flag=3;}
        }if(flag==3)
    {printf("Both words are not equal-->1\n\n\n");
     goto jump;
    }
}
   jump:
   return 0;
}
