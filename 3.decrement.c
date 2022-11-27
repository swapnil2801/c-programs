#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the values:\t");
    scanf("%d%d",&a,&b);
    c=a--;
    d=--b;
    printf("%d\n%d\n%d\n%d",a,b,c,d);
    return 0;

}