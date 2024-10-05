#include<stdio.h>
int main()
{
    double cp,sp;
    scanf("%lf %lf",&cp,&sp);
    double profit=(sp-cp);
    double profit_percentage=((profit/cp)*100);
    printf("%.2lf",profit_percentage);
}
