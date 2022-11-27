//write a function to find sum of digits of the number.
#include <stdio.h>
int sumofdigit(int n);
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    sumofdigit(n);
    
    return 0;
}
int sumofdigit(int n){
    int digit,sum=0;
    while (n!=0){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
    }
    printf("Sum of digits is :%d",sum);
}