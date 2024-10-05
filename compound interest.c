#include<stdio.h>
#include<math.h>
int main()
{
    double principal,rate,time_period;
    scanf("%lf",&principal);
    scanf("%lf",&rate);
    scanf("%lf",&time_period);
    double a=(1+(rate/100));
    double ans= pow(a,time_period);
    double amount=principal*ans;
    double ci=amount-principal;
    printf("%.2lf",ci);
    
    
}
