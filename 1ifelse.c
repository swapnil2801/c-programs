//Write a C program to find maximum between two numbers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any two no. :");
    scanf("%d%d" ,&a,&b);
    if (a<b){
        printf("%d is maximum no.",b);
    }else{
        printf("%d is maximum no.", a);
    }
    return 0;
}