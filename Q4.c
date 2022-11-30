//Write a program to check if given character is digit or not.

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter any character ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf("Entered character is digit");
    }
    else{
        printf("Entered character is not digt");
    }
    return 0;


}
