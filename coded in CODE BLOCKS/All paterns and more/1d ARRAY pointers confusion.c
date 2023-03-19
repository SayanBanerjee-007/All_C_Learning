
#include<stdio.h>
int temp(int *mark);
int main()
{
    int mark[]={2,58,56,54};

   int *ptr=mark;


        for(int j=0;j<4;j++){
            printf("%d\n",mark[j]);

        }
        printf("\n\n");
        for(int j=0;j<4;j++){
            printf("%d\n",*(mark+j));

        }
        printf("\n\n");
        for(int j=0;j<4;j++){
            printf("%d\n",*(ptr+j));

        }
        printf("\n\n");
printf("%d\n",*(ptr));
printf("%d\n",*(ptr+1));
printf("%d\n",*(ptr+2));
printf("%d\n",*(ptr+3));

}
