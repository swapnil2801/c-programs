#include<stdio.h>

int AdditionOfNumbers(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first Number: \n");
    scanf("%d",&iValue1);

    printf("Enter second Number : \n");
    scanf("%d",&iValue2);

    iRet = AdditionOfNumbers(iValue1,iValue2);

    printf("Addition is :%d",iRet);

    return 0;
}