// A year approximately consists of 3.156 × 107
 //seconds. Write a C program that accepts your 
//age in years and convert it into equivalent number of second.
#include <stdio.h>
int main()
{
    float age,sec;
    printf("Enter age :");
    scanf("%f",&age);
    sec=age*3.156E7;
    printf("Age in sec is :%6.2f",sec);
    return 0;

}