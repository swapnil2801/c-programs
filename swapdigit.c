//Write a C program to swap first and last digits of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num,firstdigit,lastdigit,swap,digit;
    printf("Enter any number :");
    scanf("%d",&num);
    lastdigit=num%10;
    digit=(int)log10(num);
    firstdigit=(int)num/(pow(10,digit));

    swap=lastdigit;
    swap*=pow(10,digit);
    swap+=num%(int)pow(10,digit);
    swap-=lastdigit;
    swap+=firstdigit;
    printf("%d",swap);
    return 0;
    
}