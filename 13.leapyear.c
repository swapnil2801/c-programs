//leap year.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d",&year);
    if (year%4==0){
        printf("Leap year");
    }else{
        printf("not a leap year");
    }return 0;
}