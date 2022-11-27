//Use of do-while statement to find
//the sum of the series 1+2+3…..n terms
#include <stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the value :");
    scanf("%d",&n);
    do
    {
        sum+=i;
        i++;
    }while(i<=n);{
        printf("%d",sum);
    }
    return 0;
}