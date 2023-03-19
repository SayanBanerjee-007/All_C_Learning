#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    int i=0,k,dec[20],po=0;
    long int res=0;
    char hex[20];
    printf("Enter a HEXADECIMAL NUMBER:");
    gets(hex);

    while(hex[i]!=0){
    if(isalpha(hex[i]))
    {
      dec[i]=hex[i]-55;
    }else if(hex[i]-48<10){
      dec[i]=hex[i]-48;
    }
     i++;
  }

    for(k=i-1;k>=0;k--,po++)
    {
        res+=dec[k]*pow(16,po);
    }
    printf("\n%s(HEXADECIMAL)--->%ld(DECIMAL)",hex,res);
    printf("\n\n\n");
    return 0;

}



