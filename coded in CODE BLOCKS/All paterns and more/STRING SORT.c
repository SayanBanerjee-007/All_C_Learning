#include<stdio.h>
void main()
{
    int n,j=0,len;
    printf("Enter numbers of line :");
    scanf("%d",&n);
    printf("\n");
    char str[n][20],temp[n][20];
    for(int i=0;i<n;i++){
      fflush(stdin);
      printf("Enter No.%d line :",i+1);
      gets(str[i]);
}
     printf("\nBefore string sort:\n");
    for(int i=0;i<n;i++){
       printf("%s\n",str[i]);

}
    for(int i=0;i<n-1;i++){

      if(str[i][0]>str[i+1][0]){
        strcpy(temp[i],str[i]);
        strcpy(str[i],str[i+1]);
        strcpy(str[i+1],temp[i]);
      }

}
    printf("\nAfter string sort:\n");
    for(int i=0;i<n;i++){
       printf("%s\n",str[i]);

}
printf("\n\n\n");
return;
}
