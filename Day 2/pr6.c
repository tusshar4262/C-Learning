#include<stdio.h>
int main()
{
    double x,y;
    printf("first number before swapping :");
    scanf("%lf",&x);
    printf("second number before swapping :");
    scanf("%lf",&y);

    x=x+y;
    y=x-y;
    x=x-y; 

    printf("first number after swapping :%.2lf\n",x);
    printf("second number after swapping :%.2lf\n",y);
    
    return 0;

}