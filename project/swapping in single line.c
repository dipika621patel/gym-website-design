#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two variable");
    scanf("%d%d",&a,&b);
   b=(a+b)-(a=b);
    printf("a=%d b=%d",a,b);
    return 0;
}
