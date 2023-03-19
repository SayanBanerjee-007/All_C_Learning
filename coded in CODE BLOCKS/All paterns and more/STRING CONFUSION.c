#include<stdio.h>
int main()
{
    char str[]="SAYAN BANERJEE";
//    str="sayan bbb"; // if u take string through ARRAY u can't change the value ..

    printf("%s\n",str);

    char *ppp="SAYAN BANERJEE";
    ppp="S.K.B";     // if u take string through POINTER u can change the value ..
    printf("%s\n\n",ppp);

}
