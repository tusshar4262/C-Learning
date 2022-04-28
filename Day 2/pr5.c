#include<stdio.h>
int main()
{
    double a,b,c;
    printf("first number before swapping :");
    scanf("%lf",&a);
    printf("second number before swapping :");
    scanf("%lf",&b);

    c=a;
    a=b;
    b=c; 

    printf("first number after swapping :%.2lf\n",a);
    printf("second number after swapping :%.2lf\n",b);
    
    return 0;

}