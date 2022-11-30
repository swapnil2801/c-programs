//find the sum of first n odd terms.
#include <stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the no . :");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2!=0)
        
        sum=sum+i;
        i++;
        

    }printf("%d",sum);
    return 0;
    
}

