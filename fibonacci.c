/*Fibonacci series is a series in which a term is equal to the sum of the 
previous two terms. The first term of the 
series is 0 and the second term is 1.*/

#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,count=2;
    printf("Enter no. ");
    scanf("%d",&n);
    printf("Fibonacci series is %d\t%d\t",a,b);
    while (count<n)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        count++;
 
    } return 0;

}