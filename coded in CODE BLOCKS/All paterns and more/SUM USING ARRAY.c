#include<stdio.h>
main()
{   int i,lim;
     float n[lim],sum=0;
    printf("How many numbers to add?\n-->");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++)
    {
    printf("Enter %d th number :",i);
     scanf("%f",&n[i-1]);
     sum+=n[i-1];
    }
printf("sum of the numbers-->%.2f",sum);


}
