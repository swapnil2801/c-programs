//Break statement inside the switch case
#include <stdio.h>
int main()
{
    char opt;
    printf("Enter any of the option  A,B,C,D  :");
    scanf("%c",&opt);
    switch (opt){
        case 'A':
        printf("A");
        break;
        case 'B':
        printf("B");
        break;
        case 'C':
        printf("C");
        break;
        case 'D':
        printf("D");
        break;
        default:
        printf("Not valid option");
    }return 0;
}