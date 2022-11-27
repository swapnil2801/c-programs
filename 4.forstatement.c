//Use of for statement to find the 
//sum of first n natural number.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the term :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum+=i;
        
    }printf("The sum of numbers is :%d ",sum);
    return 0;
}