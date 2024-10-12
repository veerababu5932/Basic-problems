#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    for(int i=(n1+1);i<n2;i++)
    {
        printf("%d %d %d\n",i,(i*i),(i*i*i));
    }
}
