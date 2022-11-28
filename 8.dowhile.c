//Use of do-while statement to fi nd
//the sum of the series 1+2+3…..n terms.
#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    {
        printf("sum is %d",sum);

    }return 0;
    
    
    
}