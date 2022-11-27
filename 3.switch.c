#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the vowel :");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'o':
    case 'i':
    case 'u':
            printf("Enter vowel is in small");
            break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
            printf("Enter vowel is in capital");

    }return 0;

}