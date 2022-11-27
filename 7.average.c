//Find the average of three numbers
#include <stdio.h>
int main()
{
    int a,b,c,avr;
    printf("Enter any three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    avr=(a+b+c)/3;
    printf("The average of three numbers is :%d",avr);
    return 0;
}