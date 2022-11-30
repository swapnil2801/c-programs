//Write a program to print the smallest number of two.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any  numbers");
    scanf("%d", &a);
    printf("Enter any  numbers");
    scanf("%d", &b);
    if (a<b)
    {
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;

}