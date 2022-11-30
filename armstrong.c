#include <stdio.h>
int main()
{
    int num,sum=0,digit,tempt;
    printf("Enter any no .");
    scanf("%d", &num);
    tempt=num;
    while(tempt!=0)
    {
        digit=tempt%10;
        sum=sum+digit*digit*digit;
        tempt=tempt/10;    
    }
    if (num==sum)
    {
        printf("Its a armstrong no.");
    }else
    {
        printf("Its not a armstrong no.");
    }
    return 0;
}