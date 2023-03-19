#include<stdio.h>

int main()
{
    int mark[2][4]={
    {2,58,56,54},
    {7,58,26,81}
    };
    int *ptr=mark;

   for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d\n",mark[i][j]);}}

            printf("\n\n");
   for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d\n",*(mark[i]+j));}}

            printf("\n\n");

        for(int j=0;j<2*4;j++){
            printf("%d\n",*(ptr+j));}


printf("\n\n");



}
