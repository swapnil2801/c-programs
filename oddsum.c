// Find sum of all odd numbers that lie between 1 and n 
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        sum+=i;
        i++;}
    printf("%d",sum);
    return 0;
}