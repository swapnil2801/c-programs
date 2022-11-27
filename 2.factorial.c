//factorial of numbers .
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("The sum is :%d",fact(n));
    return 0;
}
int fact(int n){
    if (n==0){
        return 1;
    }
    int n1=fact(n-1);
    int n2=n1*n;
    return n2;
}
