//using of library function find the square of number input is given by number.
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("The square of %d is :%f",a,pow(a,2));
    return 0;
}