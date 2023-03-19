#include<stdio.h>
int main()
{
    int n,count=1,flag=0,lim=0;
    printf("Enter highest limit: ");
    scanf("%d",&n);
    char arr[n],c;
    printf("\nEnter your sentence: ");
    fflush(stdin);
    gets(arr);
    c=arr[lim];
    while(c!='\0')
    {
        lim++;
        c=arr[lim];
    }
    n=lim;
    printf("\n****Array elements****\n\n");
    for(int i=0;i<n;i++){
        printf("%c\t",arr[i]);
    }printf("\n\n****OCCURRANCE****\n\n");

    for(int i=0;i<n;i++){
        if(i!=0){
        for(int k=i-1;k>=0;k--){
        if(arr[i]==arr[k]){
        flag=1;
               }
         }
    }
       if(flag==0){

       for(int j=(i+1);j<n;j++){
          if(arr[i]==arr[j]){
             count++;
            }
       }
             printf("\noccurrence of %c is %d times.Positions=",arr[i],count);


       for(int k=i;k<n;k++){
             if(arr[i]==arr[k]){
                printf("%d,",k+1);
             }
        }

             printf("\n_________________________________________________________________________\n");
             count=1;

    }
    flag=0;
    }
 printf("\n\n\n");
 return 0;
}

