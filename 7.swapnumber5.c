//swap number by fourth method:
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers that you want swap :");
    scanf("%d%d",&a,&b);
    b=(a+b)-(a=b);
    printf("After swap :%d,%d",a,b);
    return 0;
}