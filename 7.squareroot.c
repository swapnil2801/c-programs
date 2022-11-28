//write a fuction to find square root of function.
#include <stdio.h>
#include <math.h>
float squareroot(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    squareroot(n);
    printf("Square root of given number is :%f",squareroot(n));
    return 0;
}
float squareroot(int n){
    return (sqrt(n));
}