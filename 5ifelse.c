//Write a C program to check whether a number is even or odd.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any no. :");
    scanf("%d",&a);
    if (a%2==0){
        printf("Entered no is even");
    }else{
        printf("Entered no is odd");
    }
    return 0;
}