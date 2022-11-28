// Simple Interest and the Maturity Amount.
//principle (p), rate of interest (roi), time period (t)
// Interest i = p*roi*t/100
// Amount amt = p+i
#include <stdio.h>
int main()
{
    int p,roi,t,i,amt;
    printf("Enter the value of principle (p), rate of interest (roi), time period (t) :");
    scanf("%d%d%d",&p,&roi,&t);
    i = p*roi*t/100;
    amt = p+i;
    printf("the interest and amount is :%d\t%d",i,amt);
    return 0;
}