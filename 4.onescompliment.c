#include <stdio.h>
int main()
{
    int n,oc,tc;
    printf("Enter the value of n :");
    scanf("%d",&n);
    oc=~n;
    tc=oc+1;
    printf("%d\t%d",oc,tc);
    return 0;
}