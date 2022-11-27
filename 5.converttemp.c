//Convert the temperature given in Fahrenheit to Celsius
#include <stdio.h>
int main()
{
    int temp;
   float fh;
    printf("Tempreture in degree celcius :");
    scanf("%d",&temp);
    fh=(temp*1.8)+32;
    printf("The conversion of tempreture is %6.2f",fh);
    return 0;
    
}