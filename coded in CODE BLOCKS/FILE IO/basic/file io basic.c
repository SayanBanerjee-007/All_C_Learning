#include<stdio.h>
int main()
{
    FILE *ptr;
//    ptr=fopen("sample.txt","r");      --->read text file   if file does not exist return NULL('\0')

//    ptr=fopen("sample2.txt","w");     ---?write text file     if file does not exist create a new file with that name ,like sample2
                                        //if file exist and something is already written and u write something the old writing will be deleted

//    ptr=fopen("sample.txt","rb");     --->read binary text file      if file does not exist return NULL('\0')

// ptr=fopen("sample2.txt","wb");  ---?write binary text file  if file does not exist return create a new file with that name ,like sample2
                                        //if file exist and something is already written and u write something the old writing will be deleted



    return 0;
}
