#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input 1st side length:");
    scanf("%d",&a);
    printf("input 2st side length:");
    scanf("%d",&b);
    printf("input 3st side length:");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b)
    {
         if(a==b && a==c && b==c)
        {
            printf("Triangle is: Equilateral");
        }
         else if(a==b || b==c || a==c)
        {
           printf("Triangle is: Isosceles");
        }
         else if(a!=b && a!=c && b!=c)
        {
             printf("Triangle is: Scalene ");
        }
    }
    else
    {
        printf("Triangle is not possible");
    }
    return 0;
}