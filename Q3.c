//Write a program to print the average of 3 numbers.
#include <stdio.h>
int main()
{
    float a,b,c;
    // printf("Enter the value of a\n");
    // scanf("%d", &a);
    // printf("Enter the value of b\n");
    // scanf("%d", &b); 
    // printf("Enter the value of c\n");
    // scanf("%d", &c);

    printf("Enter the tree no. :");
    scanf("%f\n%f\n",&a,&b,&c);

    printf("The average is :%f", (a+b+c)/3.0);
    return 0;
}