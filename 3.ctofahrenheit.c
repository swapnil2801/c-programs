//Write a function to convert degree celcius to fahrenheit.
#include <stdio.h>
float farh(int n);
int main()
{
    int n;
    printf("Enter the tempreture in degree celcius :");
    scanf("%d",&n);
    float farh(int n);
    printf("the conversion is : %f", farh(n));
    return 0;
}
float farh(int n){
    float n1= n * 9.0/5.0 +32;
    return n1;
}