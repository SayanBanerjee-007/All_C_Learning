#include<stdio.h>
void temp(int ptr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Student No.%d get --->%d\n",i+1,ptr[i]);
    }
}
void abc(int*ptr,int n)
{

        for(int i=0;i<n;i++)
    {
        printf("Student No.%d get --->%d\n",i+1,*ptr);
        ptr++;
    }
ptr[2]=258;
}

int main() {
  int arr[]={5,45,89,35,65,48};
  temp(arr,6);
  abc(arr,6);

   printf("\n %d",arr[2]);
}
