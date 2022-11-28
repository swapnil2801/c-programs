#include <stdio.h>
int main()
{
    register int iCnt = 0;

    iCnt=1;     //1  initialisation of loop
    do   //2
    {
        printf("Jay ganesh...\n");  // 4  loop body
        iCnt++;         //3  Displacement of loop
    }while(iCnt<=5);
    return 0;

}