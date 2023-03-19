#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int lim,number,guess,nguess=1;
printf("Enter Limit 1 to :(10/100/1000/10000/....)\n");
scanf("%d",&lim);
srand(time(0));
number = rand()%lim+1;

    printf("Guess a number between 1 to %d \n ",lim);
  do{
     scanf("%d",&guess);
     if(guess<number)
     {
      printf("HEIGHER NUMBER PLEASE!\n");
     }
     else if(guess>number)
     {
      printf("LOWER NUMBER PLEASE!\n");
     }
     else
     {
      printf("YOU GUESS THE NUMBER AT -->%d ATTEMPTS\n",nguess);
     }
     nguess++;
    }while(guess!=number);
 return 0;
}
