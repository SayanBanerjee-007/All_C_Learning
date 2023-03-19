#include <stdio.h>
#include <math.h>

long long int DECIMAL(long long int num)
{
    long long int i = 0, dec = 0, rem;
    int step = 1;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
long long int OCTAL(long long int num)
{
    long long int i = 1, oct = 0, rem;
    int step = 1;
    while (num != 0)
    {
        rem = num % 8;
        num /= 8;
        oct += rem * i;
        i *= 10;
    }
    return oct;
}
void HEXADECIMAL(long long int num)
{

    int rem, i = 0, k;
    char hex[10];
    //char ch[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    while (num != 0)
    {
        rem = num % 16;
        if (rem < 10)
        {
            hex[i] = rem + 48;
        }
        else
        {
            // hex[i] = ch[rem - 10];
            hex[i] = rem + 55;
        }
        num /= 16;
        i++;
    }

    for (k = i - 1; k >= 0; k--)
    {
        printf("%c", hex[k]);
    }
}

int main()
{
    long long int BIN, DEC, OC;
    printf("Enter a BINARY num:");
    scanf("%lld", &BIN);

    DEC = DECIMAL(BIN);
    OC = OCTAL(DEC);

    printf("\n%lld(BINARY) --->%lld(DECIMAL)\n\n", BIN, DEC);
    printf("\n%lld(BINARY) --->%lld(DECIMAL)\n\n", BIN, OC);

    printf("\n%lld(BINARY) --->", BIN);
    HEXADECIMAL(DEC);
    printf("(HEXADECIMAL)\n\n");

    return 0;
}
