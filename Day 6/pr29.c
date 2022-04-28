#include<stdio.h>
int main()
{
    int a,b;
    float c,d,e;
    char name[20];
    scanf("%d\n",&a);
    gets(name);
    scanf("%d",&b);
    printf("Customer id.:%d\n",a);
    printf("Customer Name:%s\n",name);
    printf("Unit Consumed:%d\n",b);
    if(b<=199)
    {
        c=b*1.20;
        printf("Amount Charges @Rs. 1.20 per unit :%.2f\n",c);
    }
    else if(b>=200 && b<400)
    {
        c=b*1.50;
        printf("Amount Charges@Rs. 1.50 per unit :%.2f\n",c);
    }
    else if(b>=400 && b<600)
    {
        c=b*1.80;
        printf("Amount Charges@Rs. 1.80 per unit :%.2f\n",c);
    }
    else if(b>600)
    {
        c=b*2.00;
        printf("Amount Charges@Rs. 2.00 per unit :%.2f\n",c);
    }
     if(c<100)
     {
        printf("The Minimum Bill should be of Rs. 100/-");
     }
     else
     {
        if(c>400)
     {
        d=c*0.15;
        printf("Surcharge Amount:%.2f\n",d);
     }
     e=c+d;
     printf("Net Amount Paid By the Customer :%.2f",e);
     }
    return 0;
}