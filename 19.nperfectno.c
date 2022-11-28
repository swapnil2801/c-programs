// Check whether a given number is perfect or not.
#include <stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter any number :");
    scanf("%d",&n);
   for (int i=1;i<n;i++)
        {
           if(n%i==0)
           sum+=i;
        }if (n==sum)
        printf("The entered number is perfect number");
        else 
            printf("Entered number is not a perfect number");
        return 0;
    
}
