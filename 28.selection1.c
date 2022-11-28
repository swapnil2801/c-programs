#include <stdio.h>
#include <stdbool.h>

// % Mod operator
// == Equality operator

bool CheckEven(int iNo)
{
    if((iNo %2 ) ==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false; //initialised with false because false is 0 and boolean contain only 1 and 0
    
    printf("Enter any number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("It is even number\n");
    }
    else{
        printf("It is odd number\n");
    }

    return 0;
}