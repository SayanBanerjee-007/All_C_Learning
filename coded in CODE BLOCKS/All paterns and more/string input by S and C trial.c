#include<stdio.h>
int main()
{
    char str1[35];
    char str2[35];
    char c;
    int i=0;
    printf("Enter the value of str1 :");
    scanf("%s",&str1);
    printf("****Enter the value of str2 CHRACTER by CHRACTER****\n\n");

    for(c;c!='\n';i++){
        printf("Enter No.%d charctr:",i+1);
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;

    }
  //   str2[i-1]='\0';

    printf("\nstr1--->%s\n",str1);
    printf("str2--->%s\n",str2);
    printf("srtcmp for these two char array is-->%d\n\n\n",strcmp(str1,str2));
}

