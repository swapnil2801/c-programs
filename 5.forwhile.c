//Use of while statement to find 
//the factorial of a number.
#include <stdio.h>
int main()
{
    int fact,n,i;
    printf("Enter any no. :");
    scanf("%d",&n);
    fact=1;
    i=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }printf("The factorial is :%d",fact);
    return 0;
}