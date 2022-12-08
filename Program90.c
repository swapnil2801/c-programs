//    PATTERN PRINTING

// Input :  Row 4
//          columns 4
/* Output :
        *   *   *   *
        *   *   *   *
        *   *   *   *   
        *   *   *   *   
*/

#include <stdio.h>

void Display(int iRow,int iCol)   // N^2
{
    int i = 0;
    int j = 0;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j <= iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    printf("Pattern is :\n");

    Display(iValue1,iValue2);

    return 0;
}