#include<stdio.h>
#define MAX 100

int getMaxElement(int []);
int size;

int main(){

    int arr[MAX],i;

    printf("Enter the size of the array: ");
    scanf("%d",&size);


    for(i=0;i<size;i++){
    printf("Enter No.%d element of an array: ",i+1);
      scanf("%d",&arr[i]);
}


    printf("\nLargest element of an array is: %d\n\n",getMaxElement(arr));

    return 0;
}

int getMaxElement(int arr[]){

    static int i=0,max =-9999;

    if(i < size){
         if(max<arr[i])
           max=arr[i];
      i++;
      getMaxElement(arr);
    }

    return max;
}

