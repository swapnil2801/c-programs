#include <stdio.h>
int main()
{
    int n,rvr=0,digit;
    printf("Enter any no:");
    scanf("%d",&n);
    while (n!=0){ 
        digit=n%10;
        n=n/10;
        rvr=rvr*10+digit;
        
    }printf("reverse is :%d",rvr);
    return 0;
}
