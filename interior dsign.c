include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    int total1=x1+y1;
    int total2=x2+y2;
    if(total1<=total2)
    {
        printf("%d",total1);
    }
    else
    {
        printf("%d",total2);
    }
}
