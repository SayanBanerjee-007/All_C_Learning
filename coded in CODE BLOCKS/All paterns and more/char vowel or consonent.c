#include<stdio.h>
#include<ctype.h>
int main()
{
    char alpha;
    printf("Enter any alphabet:");
    scanf("%c",&alpha);
    if(!isalpha(alpha))
     {
         printf("\n!!!NON-ALPHABETIC CHARACTER!!!\n      PLEASE TRY AGAIN\n\n");
     }
    else if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
    {
        printf("\n%c is-->VOWEL\n\n",alpha);
    }
    else
    {
        printf("\n%c is-->CONSONENT\n\n",alpha);
    }

}
