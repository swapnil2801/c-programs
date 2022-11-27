////Set particular bit in a given number.
#include <stdio.h>
int main()
{
    int n,temp,bit;
    printf("Enter the number and the value of bit =");
    scanf("%d\t%d",&n,&bit);
    temp=1<<(bit-1);
    n=n|temp;
    printf("value after settling :%d",n);
    return 0;
}
