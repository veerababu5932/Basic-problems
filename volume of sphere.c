#include<stdio.h>
#define pi 3.14
int main()
{
    double  radius;
    scanf("%lf",&radius);
    double r=(radius*radius*radius);
    double s=(double(4)/double(3));
    //printf("%lf",s);
    double volume=(s*pi*r);
    printf("%.2lf",volume);
}
