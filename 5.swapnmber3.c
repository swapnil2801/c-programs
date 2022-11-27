//swap number by third method:
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers that you want swap :");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swap :%d,%d",a,b);
    return 0;
}