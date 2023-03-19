#include<stdio.h>
typedef struct values{
    int i;
    float f;
    }v;
int main()
{
    //struct values v1;
     v v;
    v.i=445;
    v.f=45.21;
    printf("%d , %f\n",v.i,v.f);

//    v.i=2;
//    v.f=2.3;  // without typedef if u give any name of the struct at the end , then it will directly used as struct varriable
//    printf("%d , %f\n",v.i,v.f);
    return 0;
}
