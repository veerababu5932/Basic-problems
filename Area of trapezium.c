#include<stdio.h>
int main()
{
    int base1,base2,height;
    scanf("%d",&base1);
    scanf("%d",&base2);
    scanf("%d",&height);
    int base=(base1+base2);
    double area=0.5*base*height;
    printf("%.4lf",area);
    
}
