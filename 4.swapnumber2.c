//swap two integer numbers method 2 
#include <stdio.h>
int main()
{
    int A,B;
    printf("enter any two numbers :");
    scanf("%d%d",&A,&B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("After swap numbers are :%d,%d",A,B);
    return 0;
}