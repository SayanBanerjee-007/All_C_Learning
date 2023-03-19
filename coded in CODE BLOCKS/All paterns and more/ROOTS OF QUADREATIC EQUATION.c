#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    printf("Enter the COEFFICEENTS of a,b,c:");
    printf("\n\nEnter the value of a-->");
    scanf("%f",&a);
    printf("Enter the value of b-->");
    scanf("%f",&b);
    printf("Enter the value of c-->");
    scanf("%f",&c);
    float res=pow(b,2)-(4*a*c);
    if(res>0){
        root1=(-b+sqrt(res))/(2*a);
        root2=(-b-sqrt(res))/(2*a);
        printf("\n\nRoot1=%.2f and Root2=%.2f\n\n",root1,root2);
    }
    else if(res==0){
        root1=root2=-b/(2*a);
        printf("\n\nRoot1=Root2=%.2f\n\n",root1);
    }
    else{
       root1=-b/(2 * a);
       root2= sqrt(-res)/(2*a);
       printf("\n\nroot1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n\n",root1,root2,root1,root2);

    }
    return 0;
}
