#include<stdio.h>
int main()
{
    int n,digit,rvrs=0;
    printf("Enter any no. :");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        n=n/10;
        rvrs=rvrs*10+digit;

    }printf("%d",rvrs);
    return 0;
}