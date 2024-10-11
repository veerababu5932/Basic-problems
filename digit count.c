#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    printf("%d",count);
}
