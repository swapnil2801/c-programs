//Write a C program to find sum of all even numbers between 1 to n.
#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    for (i=1;i<=num;i=i+2){
            sum+=i;   
     } printf("%d",sum);
    return 0;

}