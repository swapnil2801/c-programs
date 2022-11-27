//Write a program in C to check a given number is even or odd using the function.
#include <stdio.h>
int check(int a);
int main()
{
    int b;
    printf("Enter any number :");
    scanf("%d",&b);
    check(b);
    return 0;
}
int check(int a){
    if (a%2==0){
        printf("%d is even number.",a);
    }else{
        printf("%d is odd number.",a);
    }
}