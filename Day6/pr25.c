#include<stdio.h>
int main()
{
    int a,b,c,d=180;
    printf("enter first angle:");
    scanf("%d",&a);
    printf("enter second angle:");
    scanf("%d",&b);
    printf("enter third angle:");
    scanf("%d",&c);
    if(d==a+b+c)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is not valid");
    }
    return 0;
}