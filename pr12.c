#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("first number is largest : %d",a);
    }
    else if(b>a && b>c){
        printf("second number is largest : %d",b);
    }
    else{
        printf("third number is largest : %d",c);
    }
    return 0;
}