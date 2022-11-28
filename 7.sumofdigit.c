//find the sum of individual digits in a given positive integral number ;
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    sum(n);
    return 0;
}
int sum(int n){
    int digit,sum=0;
    while(n!=0){   
    digit=n%10;
    sum+=digit;
    n=n/10;}
    printf("The sumof the digit is :%d",sum);
}