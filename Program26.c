# include <stdio.h>

int Summation()
{
    int iSum = 0;
    
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;

    iSum = iSum + iNo1;
    iSum = iSum + iNo2;
    iSum = iSum + iNo3;
    iSum = iSum + iNo4;
    iSum = iSum + iNo5;

    return iSum;
}
int main()
{
    int iAns = 0;
    iAns = Summation();
    printf("Addition of first five numbers is: %d",iAns);
    return 0;
}