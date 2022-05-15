#include<stdio.h>
int main()
{
    int a,b,sum,sub,pro,mod;
    float div;
    printf("enter both the numbers :");
    scanf("%d %d",&a,&b);

    sum=a+b;
    sub=a-b;
    pro=a*b; 
    div=(float)a/b;
    mod=a%b;

    printf("operations of addition =%d\n",sum); 
    printf("operations of subtraction =%d\n",sub); 
    printf("operations of multiplication =%d\n",pro); 
    printf("operations of divide =%f\n",div);
    printf("operations of modulus =%d",mod);

    return 0; 
}