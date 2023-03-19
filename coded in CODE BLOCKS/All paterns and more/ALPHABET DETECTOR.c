#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter any alphabet:");
    scanf("%c",&alpha);
    if((alpha>='a'&&alpha<='z')||(alpha>='A'&&alpha<='Z')){
        printf("\n%c is -->ALPHABET\n\n",alpha);
    }
    else{
        printf("\n%c is -->NON ALPHABETIC\n\n",alpha);
    }
        return 0;
}
