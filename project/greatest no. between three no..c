#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    printf("greater no is %d",a>b?a>c?a:c:b>c?b:c);
    return 0;
}
