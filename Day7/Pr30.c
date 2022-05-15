#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

if(a>b && a>=c)
{
    if(b>=c)
    printf("this is second highest %d",b);
    else
    printf("%d",c);
}
else if(b>a && b>c)
{
    if(a>=c)
    printf("this is second highest %d",a);
    else
    printf("%d",c);
}
else
{
    printf("this is second highest %d",c);
}
return 0;
}
