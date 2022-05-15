#include<stdio.h>
int main()
{
    int a,b;
    printf("enter both the numbers :");
    scanf("%d  %d",&a,&b);
    if(a>b){
        printf("maximum number is a: %d",a);
    }
    else{
        printf("maximum number is b: %d",b);
    }
    return 0;
}