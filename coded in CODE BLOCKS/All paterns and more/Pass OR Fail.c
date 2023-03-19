#include<stdio.h>
int main()
{
    float chemistry,phiscys,math,total;
    printf("Enter chemistry number :");
    scanf("%f",&chemistry);
    printf("Enter Physics number :");
    scanf("%f",&phiscys);
    printf("Enter Mathamatics number :");
    scanf("%f",&math);
    total=(chemistry+phiscys+math)/3;
    if((total<40) || chemistry<33 || phiscys<33 || math<33)
    {
        printf("Your total percentage is %.2f which is less than 40\nYOU HAVE FAILED\n",total);
    }
    else
    {
        printf("Your total percentage is %.2f which is GREATER than 40\nYOU HAVE PASSED\n",total);
    }

    return 0;
}
