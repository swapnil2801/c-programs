//Use for statement to find 
//the factorial of a number.
#include <stdio.h>
int main()
{
    int i=1,fact=1,n;
    printf("Enter any no. :");
    scanf("%d",&n);
    while(i<=n){
        fact*=i;
        i++;
    }printf("%d",fact);
    return 0;
}