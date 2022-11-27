// Write a program in C to read 10 numbers from keyboard and find their sum and average.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter any ten numbers :");
    for(i=1;i<=10;i++){
        printf("Number-%d=",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("Sum is :%d",sum);
    avg=sum/10.00;
    printf("\nAvrage of 10 numbers is :%f",avg);
    return 0;
}