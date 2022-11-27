//alphabet
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet :");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        printf("Entered alphabet is in small");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Entered alphabet is in capital");
    }
    else{
        printf("Entered character is not alphabet");
    } return 0;
}