//Write a program in C to display the vertical multiplication table of a given integer.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The table of given number is:\n");
        for(int i=1;i<=10;i++){
            printf("%d*%d");
        
        }
    return 0;
}