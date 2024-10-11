#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int res=0;
    while(number!=0)
    {
        int rem=number%10;
        res=res+rem;
        number=number/10;
    }
    printf("%d",res);
}
