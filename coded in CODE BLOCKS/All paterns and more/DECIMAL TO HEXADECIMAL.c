#include<stdio.h>
int main()
{
    int num,rem,i=0;
    char hex[10];
    printf("Enter a DECIMAL num:");
    scanf("%d",&num);
    char ch[]={'A','B','C','D','E','F'};


    while(num!=0){
    rem=num%16;
    if(rem<10)
    {
      hex[i]=rem+48;
    }else
    {
      hex[i]=ch[rem-10];
    }
    num/=16;
    i++;
  }

    for(int k=i-1;k>=0;k--)
    {
        printf("%c",hex[k]);
    }

    return 0;

}


