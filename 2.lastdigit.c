//get a number from user and print lastdigit of that number
#include <stdio.h>
int main()
{
    int a,rvr;
    printf("Enter any number :");
    scanf("%d",&a);
    rvr=a%10;
    printf("Last digit of given number is %d ",rvr);
    return 0;
}