#include <stdio.h>

int main()
{
    int iNo = 0;
    printf("Enter your room number to get floor number :");
    scanf("%d",&iNo);

    switch (iNo)
    {
    case 11:
        printf("Floor number 2\n");
        break;
    
    case 21:
        printf("Floor number 3\n");
        break;

    case 31:
        printf("Floor number 4\n");
        break;

    case 41:
        printf ("Floor number 5\n");
        break;

    
    default:
        printf("Please enter valid number");
        break;
    }
    return 0;
}
