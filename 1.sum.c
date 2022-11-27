//sum of n numbers.
#include <stdio.h>
int sum(int a);
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("sum is : %d",sum(a));
    return 0;
}
int sum(int a){
    if(a==1){
        return 1;
    }
    int n1=sum(a-1);// sum of 1 to n-1.
    int n2=n1+a;
    return n2;
}