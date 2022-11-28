//Make your own pow function.
#include <stdio.h>
double power(int a,int b);
int main()
{
    int a,b;
    printf("Enter the value of a which is base :");
    scanf("%d",&a);
    printf("Enter the value of b which is rest to power :");
    scanf("%d",&b);
    power(a,b);
    return 0;
}
double power(int a,int b){
    double pow=1;
    while (b!=0){
        pow=pow*a;   
    b--;}
    printf("Power is :%f",pow);
}
