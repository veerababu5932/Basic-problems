#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    for(int i=1;i<=12;i++)
    {
        c=n*i;
        printf("%d x %d = %d\n",n,i,c);
    }
}
