#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch='A';
    ch=ch+(n-1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        ch--;
        printf("\n");
    }
}
