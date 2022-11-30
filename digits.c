//Write a C program to find first and last digit of a number.
#include <stdio.h>
int main()
{
    int num,i,firstdigit,lastdigit;
    printf("Enter any number :");
    scanf("%d",&num);
    lastdigit=num%10;
    printf("Last digit is :%d",lastdigit);
    while(num>=10){
        firstdigit=num/10;
        printf("%d",&firstdigit);}
        return 0;
    }
