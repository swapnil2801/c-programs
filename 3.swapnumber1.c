//swap two integer numbers 
#include <stdio.h>
int main()
{
    int A,B,C=0;
    printf("enter any two numbers :");
    scanf("%d%d",&A,&B);
    C=A;
    A=B;
    B=C;
    printf("After swap numbers are :%d,%d",A,B);
    return 0;
}