#include<stdio.h>
int main()
{
    FILE *in,*out;
    char c,arr[100];
    int i=0,j;
    in=fopen("inputFile.txt","r");
    if(in==NULL){
        printf("ERROR !! THIS FILE DOES NOT EXIST.");
    }else{
    c=fgetc(in);
    while(c!=EOF)
    {
        arr[i]=c;
        i++;
        c=fgetc(in);
    }
    }arr[i]=0;
    fclose(in);

     out=fopen("outputFile.txt","w");
     for(j=1;j<=2;j++)
     {
         fprintf(out,"%s",arr);
     }
     fclose(out);
     return 0;

}
