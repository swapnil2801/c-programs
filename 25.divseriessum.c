//find the sum of the series 1+1/2+1/3+..n terms.
#include <stdio.h>
int main()
{
    int i=1,n;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+(1/(float)i);
        i++;
    }printf("%f",sum);
    return 0;
}