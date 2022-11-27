#include <stdio.h>

int addition(int iValue1, int iValue2)
{
    int iOutput = 0;
    iOutput = iValue1 + iValue2;
    return iOutput;
}
int main()
{
    int iNo1 = 10;
    int iNo2 = 11;
    int iAns = 0;

    iAns = addition(iNo1,iNo2);

    printf("Addition is : %d\n",iAns);

    return 0;

}