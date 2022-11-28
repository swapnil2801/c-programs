//find the sum of odd numbers between 1 and n.
#include <stdio.h>
int odd(int n);
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    odd(n);
    return 0;
}
int odd(int n){
    int i=1,sum=0;
    while(i<=n){
        if(i%2==1){
        sum=sum+i;
        }i++;

    }printf("%d",sum);
}