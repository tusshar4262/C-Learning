#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Sale amount :");
    scanf("%f",&a);
    b=a*.10;
    c=a*.15;
    d=a*.20;
    if(a<500)
    {
        printf("Commission : Rs. 35");
    }
    else if(a>=500 && a<=2000)
    {
        printf("Commission : Rs. %.2f",b);
    }
    else if(a>=2001 && a<=5000)
    {
        printf("Commission : Rs. %.2f",c);
    }
    else if(a>5000)
    {
        printf("Commission : Rs. %.2f",d);
    }
    return 0;
    
}