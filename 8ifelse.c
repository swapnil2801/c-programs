//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any variable\n");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("enter variable is alphabet\n");
    }else if (ch>='0' && ch<='9') {
        printf("enter variable is digit\n");
    }else {
        printf("Entered variable is character");
    }
    return 0;
}