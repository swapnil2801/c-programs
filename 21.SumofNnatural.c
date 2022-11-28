//write a program to print the sum of first n natural numbers:

#include <stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter numbert:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum=sum+i;

    }printf("Sum of first %d natural number is %d",n,sum);
    return 0;
}