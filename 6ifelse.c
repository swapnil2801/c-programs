//Write a C program to check whether a year is leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year \t");
    scanf("%d",&year);
    /*
     * If year is exactly divisible by 4  and year is not divisible by 100
     * or year is exactly divisible by 400 then
     * the year is leap year.
     * Else year is normal year
     */
    if (year%4==0){
        printf("The year is leap year ");
    }else{
        printf("The year is not leap year");
    }
    return 0;
}