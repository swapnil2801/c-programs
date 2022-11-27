/*Program for analysis of people of certain age groups who are eligible for 
getting a suitable job if their condition and norms get satisfied 
using nested if statement.*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if (age<18){
        printf("You are in minor section you are not eligible");
    } else if (age>=18 && age<=50){
        printf("You are  eligible");
    } else {
        printf("you are not eligible");
    }return 0;

}