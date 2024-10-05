#include<stdio.h>
#define pi 3.14
int main()
{
    int radius;
    scanf("%d",&radius);
    double area=pi*radius*radius;
    double perimeter=2*pi*radius;
    printf("%.2lf\n",area);
    printf("%.2lf",perimeter);
}
