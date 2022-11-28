//Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any variable\n");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("enter variable is alphabet\n");
    }else {
        printf("enter variable is not an alphabet\n");
    }
    return 0;
}