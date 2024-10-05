#include<stdio.h>
int main()
{
    int tracks,sectors,blocks;
    scanf("%d",&tracks);
    scanf("%d",§ors);
    scanf("%d",&blocks);
    int capacity=((2*tracks*sectors*blocks*512)/1024);
    printf("%d",capacity);
    printf(" KB");
    
}
