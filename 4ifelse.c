//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int main()
{
    int a;
    printf("enter any no. :\n");
    scanf("%d",&a);
    if (a%5==0){
        printf("%d is an disible with 5\n",a);
    }else if (a%11==0){
        printf("%d is an disible with 11\n",a);
    }else  {
        printf("%d is not divisible with 5 and 11\n",a);
    }
    return 0;
}