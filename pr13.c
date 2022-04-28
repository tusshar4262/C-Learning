#include<stdio.h>
int main()
{
    int a;
    printf("enter input number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("the number given is even:%d",a);
    } 
    else{
        printf("the number given is odd:%d",a);
    }
    return 0;
}