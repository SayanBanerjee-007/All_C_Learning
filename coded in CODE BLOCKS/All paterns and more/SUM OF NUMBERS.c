#include<stdio.h>
main()
{
    int i,n,v,sum=0;

    printf("How many numbers to add?\n-->\n");
    scanf("%d",&n);
    //int ar[v];
    for(i=1;i<=n;i++)
    {
      printf("Enter value -->" );
      scanf("%d",&v);
      sum+=v;

    }
printf("%d",sum);

}
