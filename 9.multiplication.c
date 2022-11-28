//Write a C program to multiply a given number with 2n
//without using a multiplication operator. The value of n will be entered by the use.
#include <stdio.h>
int main()
{
    int num,n,res;
    printf("Enter two values :");
    scanf("%d%d",&num,&n);
    res=num<<n;
    printf("%d",res);
    return 0;
}