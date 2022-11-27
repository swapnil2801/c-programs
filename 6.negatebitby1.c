//Negate a particular bit in a given number to 1.
#include <stdio.h>
int main()
{
    int n,bit,temp;
    printf("Enter the value :");
    scanf("%d",&n);
    printf("Enter the bit to negate :");
    scanf("%d",&bit);
    temp=1<<(bit-1);
    n=n^temp;
    printf("Value after settling :%d",n);
    return 0;

}