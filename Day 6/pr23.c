#include<stdio.h>
#include<math.h>
int main()
{
    float x,c;
    printf("Input value of x:");
    scanf("%f",&x);
    c=sin(1/x);
    if(x==0)
    {
        printf("value of sin(1/x) is 'Not Possible'");
    }
    else
    {
        printf("value of sin(1/x) is %.4f",c);
    }
    return 0;

}