#include <stdio.h>
int main()
{
    int iValue = 0;

    printf("Tumch token enter kara :\n");
    scanf("%d",&iValue);

    switch (iValue){
        case 11:
            printf("Mulachi chappal milali\n");
            break;
        case 21:
            printf("Mulichi chappal milali\n");
            break;
        case 31:
            printf("Aaichi chappal milali\n");
            break;
        case 101:
            printf("Wadlanchi chappal milali\n");
            break;
        default:
            printf("Asa tokan nahiyee..\n");

    }return 0;
}