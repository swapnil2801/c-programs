//check whether the given number is even or odd: 3rd method 
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    a%2?printf("Given number is odd"):printf("Given number is even");
    return 0;
}
