#include<stdio.h>
int cal(int b , int p)
{

  if(p==0){
    return 1;
  }else{
  return b*cal(b,p-1);
  }
}
int main()
{
    int n,p,res;
    printf("Enter the base your number: ");
    scanf("%d",&n);
    printf("Enter the power of the number: ");
    scanf("%d",&p);
    res=cal(n,p);

    printf("\n%d ^ %d = %d \n\n",n,p,res);
    return 0;
}
