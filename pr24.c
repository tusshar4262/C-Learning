#include<stdio.h>
int main()
{
    int x,y;
    float c;
    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    if(x%y==0)
    {
        c=x/y;
        printf("%.1f",c);
    }
    else
    {
        printf("Division not possible");
    }
    return 0;
}