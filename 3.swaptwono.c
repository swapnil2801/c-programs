#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("%d%d",a,b);
    return 0;
}