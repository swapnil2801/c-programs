//alphabet
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet :");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("Entered character is alphabet");
    }
    else{
        printf("Entered character is not alphabet");
    } return 0;
}