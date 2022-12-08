#include <stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0;
while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character that you want to check its frequency:\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of %c characters is : %d\n",cValue,iRet);
    return 0;
}