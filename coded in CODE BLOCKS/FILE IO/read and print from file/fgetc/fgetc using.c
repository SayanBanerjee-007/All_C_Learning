#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;// this is needed for only one char  and also for the last type of FILE reading
    ptr=fopen("prac.txt","r");
   // fscanf(ptr,"%c",&c);   --->OLD TYPE LOL.....
 /*   c=fgetc(ptr);
    printf("%c",c);*/  //-->for only one char

 /*   printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));*/  //--->Old type of reading many lines char by char from FILE  LOL.....

    c=fgetc(ptr);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(ptr);          //---->Most updated version till now LoL.............
    }
    fclose(ptr);
    return 0;
}
