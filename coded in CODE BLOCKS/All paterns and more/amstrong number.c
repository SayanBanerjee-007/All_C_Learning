 #include<stdio.h>
main()
{
  int original,rem;
  float res=0;
  printf("Enter a integer value : \n");
  scanf("%d",&original);

  int temp=original;
  for(original;original!=0;)
    {

        rem = original % 10;

       res += pow(rem,3);


       original /= 10;
  }
    if(temp==(int)res)
        printf("%d is AMSTRONG number.\n",temp);
    else
            printf("%d is NOT AMSTRONG number.\n",temp);





}
