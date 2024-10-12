#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=a;i<=b;i++)
    {
        c=n*i;
        printf("%d x %d = %d\n",n,i,c);
    }
}
