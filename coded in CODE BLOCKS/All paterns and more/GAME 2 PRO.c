#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int play(char user , char comp)
{
    if(user == comp)
    {
        return 0;
    }
    if(user == 'r' && comp == 'p')
    {
        return -1;
    }else if(user == 'p' && comp == 'r')
    {
        return 1;
    }
    if(user == 'r' && comp == 's')
    {
        return 1;
    }else if(user == 's' && comp == 'r')
    {
        return -1;
    }
    if(user == 's' && comp == 'p')
    {
        return 1;
    }else if(user == 'p' && comp == 's')
    {
        return -1;
    }
}
int main()
{
    char user,comp,choice='y';
    int num,result;
    while(choice=='y'){
    srand(time(0));
    num = rand()%10+1;
    if(num < 3)
    {
    comp = 'r';
    }else if(num > 3 && num <= 6)
    {
    comp = 'p';
    }else
    {
    comp = 's';
    }

    printf("****This is ROCK PAPER SCISSOR game****\n\nEnter your choice 'r' for ROCK , 'p' for PAPER , 's' for SCISSOR.\n\n--->");
    fflush(stdin);
    scanf("%c",&user);
    if(user!='r' && user!='p' && user!='s')
    {
      printf("\nERROR!! PLEASE TRY AGAIN.\nYou have entered wrong alphabet.\n");
      goto jump;
    }
    result=play(user,comp);
    printf("You have chosen %c and Computer has chosen %c.",user,comp);
    if(result == 0)
    {
        printf("\nMATCH DRAW!!");
    }else if(result == 1)
    {
        printf("\nYOU WIN!!");
    }else
    {
        printf("\nYOU LOSE!!");
    }
    printf("\n\nDo you want to play again?(y/n)\n--->");
    fflush(stdin);
    scanf("%c",&choice);
    jump:
    printf("_______________________________________________________________\n\n");
    }
    printf("\n\n\n");
    return 0;
}

