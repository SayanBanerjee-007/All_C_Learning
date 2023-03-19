#include<stdio.h>
int main()
{
    float num[5],per=0;
    for(int i=0;i<5;i++){
    printf("Enter No.%d your number out of 100 : ",i+1);
    scanf("%f",&num[i]);
    per+=num[i];
    }
    per/=5;
    if(per>60&&per<=100)
    {
      printf("%f---> FIRST Division",per);
    }else if(per >=50&&per<60)
    {
      printf("%f---> SECOND Division",per);
    }else if(per<50 &&per>=40)
    {
      printf("%f---> THIRD Division",per);
    }else if(per >=0 &&per <40)
    {
      printf("**FAIL**");
    }else
    {
      printf("YOU HAVE ENTERED WRONG NUMBER");
    }

    return 0;
}
