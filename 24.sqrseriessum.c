//find the sum of the series 1^2+2^2+....n.
#include <stdio.h>
int main()
{
    int sum=0,i=1,n;
    printf("Enter any number :");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i*i;
        i++;
    }printf("%d",sum);
    return 0;
}