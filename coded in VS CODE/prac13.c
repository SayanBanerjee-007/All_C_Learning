#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int vow = 0, con = 0, i = 0;
    char word[20];
    printf("Enter any word you want: ");
    scanf("%s", word);

    while (word[i] != 0)
    {
        if (!isalpha(word[i]))
        {
            printf("You have entered wrong data.\n");
            exit(0);
        }
        i++;
    }i=0;
    while (word[i] != 0)
    {
        if (word[i] >= 'A' && word[i]<='Z'){
            tolower(word[i]);
        }
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
            vow++;
        }else{
            con++;
        }i++;
    }
    printf("Numbers of vowel is -> %d\n",vow);
    printf("Numbers of consonant is -> %d\n",con);
    return 0;
}