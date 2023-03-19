#include<stdio.h>
#include<string.h>
void type(char *num,int l);
int main()
{
  char num[20];
  printf("Enter limit:");
  scanf("%s",num);
  int l=strlen(num);
  type(num,l);
  printf("\n\n");
  return 0;
}
void type(char *num,int l)
{
    int flag=0;
  while(l--)
  {
       if (num[l] == '.')
        {
            flag = 1;
            break;
        }
    }
    if (flag==1)
        printf("Entered Number is Float Number\n");
    else
        printf("Entered Number is Integer\n");

  }
