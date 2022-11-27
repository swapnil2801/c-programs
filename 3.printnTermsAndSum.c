//Write a program in C to display n terms of natural number and their sum.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the n term :");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+i;
        printf("%d\n",i);
    } 
    printf("\nThe sum of first %d terms is :%d",n,sum);
    return 0;
}