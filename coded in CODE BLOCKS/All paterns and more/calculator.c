#include<stdio.h>
int main()
{
    float num1,num2,res;
    char ch,decision;
    printf("Enter number 1----> ");
    scanf("%f",&num1);
    printf("Enter number 2----> ");
    scanf("%f",&num2);
    do{
    fflush(stdin);
    printf("Enter your choice('+' or '-' or '*' or '/'): ");
    scanf("%c",&ch);
    if(ch!='+' && ch!='-' && ch!='*' && ch!='/')
    {
        printf("ERROR!!!\nYOU HAVE ENTERED WRONG SIGN,\nTRY AGAIN. ");
    }else
    {
        switch(ch)
        {
        case '+':
        {res=num1+num2;
        printf("\nsummation = %.2f",res);
        break;
        }
        case '-':
       {res=num1-num2;
        printf("\nsubtraction = %.2f",res);
        break;
        }
        case '*':
       {res=num1*num2;
        printf("\nmultipication = %.2f",res);
        break;
        }
        case '/':
       {res=num1/num2;
        printf("\ndivision = %.2f",res);
        break;
        }
        }
    }   fflush(stdin);
        printf("\nWant to do again?(y/n): ");
        scanf("%c",&decision);
        if(decision=='y')
        {num1=res;
         printf("Enter next number: ");
         scanf("%f",&num2);
        }else
        {
            goto jump;
        }

    }while(decision=='y');

    jump:
    printf("\n\n");
    return 0;
}
