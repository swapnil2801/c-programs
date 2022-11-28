//find the reverse of the given number ;
#include <stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
int reverse(int n){
    int digit,rvr=0;
    while(n!=0){
    digit=n%10;
    n=n/10;
    rvr=rvr*10+digit;
    }
    printf("Reverse of the number is :%d ",rvr );
}