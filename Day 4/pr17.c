#include<stdio.h>
int main()
{
    int days,week,year,c;
    printf(" Number of days :");
    scanf("%d",&days);
    year=days/365;
    c=days%365;
    week=c/7;
    days=c%7;
    printf("Years : %d\n",year);
    printf("weeks : %d\n",week);
    printf("Days : %d",days);
    return 0;
}