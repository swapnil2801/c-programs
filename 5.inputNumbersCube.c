// Write a program in C to display the cube of the number upto given an integer.
#include <stdio.h>
int main()
{
    int i,num,cube,n;
    printf("Enter the number for how many numbers you want to give for cube :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("\nNumber-%d is ",i);
        scanf("%d",&n);
        printf("cube of number is %d\v",(n*n*n));
    }
    return 0;
}