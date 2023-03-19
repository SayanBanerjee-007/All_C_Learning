#include<stdio.h>
#include<ctype.h>
int main()
{
    char alpha;
    printf("Enter any alphabet:");
    scanf("%c",&alpha);
    if(!isalpha(alpha)){
        printf("\n%c is -->NON ALPHABETIC\n\n",alpha);
    }
    else{
        printf("\n%c is -->ALPHABET\n\n",alpha);

    }
        return 0;
}
