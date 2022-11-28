#include <stdio.h>
int main()
{
    int Arr[4] = {11,21,51,101};

    printf("Elemants of array are :\n");

    int iCnt = 0;

    for (iCnt=0; iCnt<=3; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    return 0;
}